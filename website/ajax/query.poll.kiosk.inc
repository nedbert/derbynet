<?php
require_once('inc/data.inc');
require_once('inc/kiosks.inc');

if (isset($_GET['address'])) {
  $kiosk_page = kiosk_page($_GET['address']);
} else {
  $kiosk_page = kiosk_page(address_for_current_kiosk());
}
?><kiosk_setting page="<?php echo $kiosk_page['page']; ?>"
                 params="<?php echo htmlspecialchars($kiosk_page['params'], ENT_QUOTES, 'UTF-8'); ?>"
                 name="<?php echo @$kiosk_page['name']; ?>"/>
