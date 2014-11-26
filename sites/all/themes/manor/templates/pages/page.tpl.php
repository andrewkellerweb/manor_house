<?
if ($node = menu_get_object()) {
  $nid = $node->nid;
}
?>

<div class="container-main">
  <header id="header" role="banner" class="flex-container">
    <div class="logo flex-item-1">
      <a href="<?php print base_path(); ?>"><img src="<?php print base_path() . path_to_theme() ?>/assets/images/logo.png" /></a>
    </div>
    <div class="page-image flex-item-1">
      <?php print views_embed_view('embedded_views', 'embed_page_header', $nid);?> 
    </div>
  </header>
  <nav>
      <?php print render($page['navigation']); ?>
  </nav>
</div> <!-- /.container-main -->

<div class="container-main">
  <?php print views_embed_view('embedded_views', 'embed_page_hero', $nid);?> 
  <div class="flex-container">
    <div class="content-main flex-item-3" role="main">
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div><!-- /.content-main -->

    <aside class="sidebar flex-item-1">

      <!-- Facebook -->
      <a href="#"><svg version="1.2" baseProfile="tiny" id="Layer_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink"
         x="0px" y="0px" viewBox="0 0 24 24" xml:space="preserve">
      <g>
        <path d="M13,10h3v3h-3v7h-3v-7H7v-3h3V8.745c0-1.189,0.374-2.691,1.118-3.512C11.862,4.41,12.791,4,13.904,4H16v3h-2.1
          C13.402,7,13,7.402,13,7.899V10z"/>
      </g>
      </svg></a>

      <!-- Twitter -->
      <a href="#"><svg class="twitter" viewBox="328 355 335 276" xmlns="http://www.w3.org/2000/svg">
        <path class="asdf" d="
          M 630, 425
          A 195, 195 0 0 1 331, 600
          A 142, 142 0 0 0 428, 570
          A  70,  70 0 0 1 370, 523
          A  70,  70 0 0 0 401, 521
          A  70,  70 0 0 1 344, 455
          A  70,  70 0 0 0 372, 460
          A  70,  70 0 0 1 354, 370
          A 195, 195 0 0 0 495, 442
          A  67,  67 0 0 1 611, 380
          A 117, 117 0 0 0 654, 363
          A  65,  65 0 0 1 623, 401
          A 117, 117 0 0 0 662, 390
          A  65,  65 0 0 1 630, 425
          Z"
          />
      </svg></a>

      <!-- Pinterest -->
      <a href="#"><svg version="1.2" baseProfile="tiny" id="Layer_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink"
         x="0px" y="0px" viewBox="0 0 24 24" xml:space="preserve">
      <g>
        <path d="M12.486,4.771c-4.23,0-6.363,3.033-6.363,5.562c0,1.533,0.581,2.894,1.823,3.401c0.205,0.084,0.387,0.004,0.446-0.221
          c0.041-0.157,0.138-0.553,0.182-0.717c0.061-0.221,0.037-0.3-0.127-0.495c-0.359-0.422-0.588-0.972-0.588-1.747
          c0-2.25,1.683-4.264,4.384-4.264c2.392,0,3.706,1.463,3.706,3.412c0,2.568-1.137,4.734-2.824,4.734
          c-0.932,0-1.629-0.77-1.405-1.715c0.268-1.13,0.786-2.347,0.786-3.16c0-0.729-0.392-1.336-1.2-1.336
          c-0.952,0-1.718,0.984-1.718,2.304c0,0.841,0.286,1.409,0.286,1.409s-0.976,4.129-1.146,4.852c-0.34,1.44-0.051,3.206-0.025,3.385
          c0.013,0.104,0.149,0.131,0.21,0.051c0.088-0.115,1.223-1.517,1.607-2.915c0.111-0.396,0.627-2.445,0.627-2.445
          c0.311,0.589,1.213,1.108,2.175,1.108c2.863,0,4.804-2.608,4.804-6.103C18.123,7.231,15.886,4.771,12.486,4.771z"/>
      </g>
      </svg></a>

      <!-- Google Plus -->
      <a href="#"><svg class="googleplus" version="1.1" id="Layer_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px"
         viewBox="0 0 512 512" style="enable-background:new 0 0 512 512;" xml:space="preserve">
      <g>
        <path d="M242.1,275.6l-18.2-13.7l-0.1-0.1c-5.8-4.6-10-8.3-10-14.7c0-7,5-11.8,10.9-17.4l0.5-0.4c20-15.2,44.7-34.3,44.7-74.6
          c0-26.9-11.9-44.7-23.3-57.7h13L320,64H186.5c-25.3,0-62.7,3.2-94.6,28.6l-0.1,0.3C70,110.9,57,137.4,57,163.5
          c0,21.2,8.7,42.2,23.9,57.4c21.4,21.6,48.3,26.1,67.1,26.1c1.5,0,3,0,4.5-0.1c-0.8,3-1.2,6.3-1.2,10.3c0,10.9,3.6,19.3,8.1,26.2
          c-24,1.9-58.1,6.5-84.9,22.3C35.1,328.4,32,361.7,32,371.3c0,38.2,35.7,76.8,115.5,76.8c91.6,0,139.5-49.8,139.5-99
          C287,312,264.2,293.5,242.1,275.6z M116.7,139.9c0-13.4,3-23.5,9.3-30.9c6.5-7.9,18.2-13.1,29-13.1c19.9,0,32.9,15,40.4,27.6
          c9.2,15.5,14.9,36.1,14.9,53.6c0,4.9,0,20-10.2,29.8c-7,6.7-18.7,11.4-28.6,11.4c-20.5,0-33.5-14.7-40.7-27
          C120.4,173.5,116.7,153.1,116.7,139.9z M237.8,368c0,27.4-25.2,44.5-65.8,44.5c-48.1,0-80.3-20.6-80.3-51.3
          c0-26.1,21.5-36.8,37.8-42.5c18.9-6.1,44.3-7.3,50.1-7.3c3.9,0,6.1,0,8.7,0.2C224.9,336.8,237.8,347.7,237.8,368z"/>
        <polygon points="402,142 402,64 368,64 368,142 288,142 288,176 368,176 368,257 402,257 402,176 480,176 480,142  "/>
      </g>
      </svg></a>

    </aside><!-- /.sidebars -->
  </div> <!-- /.flex-container -->
</div> <!-- /.container-main -->

<div class="wrapper footer">
  <?php print render($page['footer']); ?>
</div>
