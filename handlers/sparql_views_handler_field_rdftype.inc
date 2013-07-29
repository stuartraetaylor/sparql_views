<?php
/**
 * Handler for a subject.
 */
class sparql_views_handler_field_rdftype extends sparql_views_handler_field {
  function render_field_formatter($values, $formatter) {
    $items[] = array('value' => $values->{$this->real_field});
    $display['type'] = 'text_plain';
    $formatter_result = text_field_formatter_view(NULL, NULL, NULL, NULL, NULL, $items, $display);
    return render($formatter_result);
  }
}