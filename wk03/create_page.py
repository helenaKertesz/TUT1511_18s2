import os


def sanitise(code):
   special = {'<':'&lt;', '>':'&gt;', '&':'&amp;', '\'':'&apos;'}
   for i,j in special.iteritems():
      code = code.replace(i, j)
   return code


head = open('../components/head.html', 'r');
header = open('../components/header.html', 'r');
footer = open('../components/footer.html', 'r');

page = open('index.html', 'w')

page.write('<!DOCTYPE html>')
page.write('<html lang="en">')
page.write( head.read() )

page.write('  <body>')
page.write( header.read() )

# main section start
page.write('<main role="main">')
page.write('<div class="jumbotron text-center">')
page.write('<div class="container">')

page.write('<h1 class="jumbotron-heading">Week 3</h1>')
 
# for every .c file in this folder
# TODO inplement some ordering?
for f in os.listdir('.'):
   if f.endswith('.c'):

      # if there is an info file, print it
      info = f.strip('.c') + '.txt';
      if os.path.isfile(info):
         info = open( info, 'r')
         file_info = open('../components/file_info.html', 'r')
         page.write( file_info.read().replace('copy_info', info.read()))
         # TODO

      # print title bar for file
      file_bar = open('../components/file_bar.html', 'r')
      page.write( file_bar.read().replace('file_name', f))

      # print out file contents (code)
      f = open(f, 'r')
      code = open('../components/code.html', 'r')
      sanitised = sanitise( f.read() )
      code = code.read().replace('copy_code', sanitised)
      page.write(code)
      

# main section end
page.write('</div></div></main>')

page.write( footer.read() )
page.write('  </body>')

page.write('</html>')

