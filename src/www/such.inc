<?
  if ($begriff == "") {
?>
    <h2>Suchen</h2>
    
    <form action="<? echo "$PHP_SELF?suchen=1"; ?>" method="post">
    <input type="text" name="begriff">
    <select name="where">
      <option>Name</option>
      <option>Zutat</option>
      <option>Kategorie</option>
    </select>
    <br>
    <input type="submit" value="Suchen">
    </form>
<?
  } else {
?>
    <h2>Suchergebnis</h2>

    <p>
    foo
    </p>
<?
  }
?>
