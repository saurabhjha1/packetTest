  var modDate = new Date(document.lastModified)
  var m_names = new Array("January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December");

  if (Date.parse(document.lastModified) != 0) {
      var modiDate = new Date(document.lastModified);
      var monthName = new Array("January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December");
      var date_modified = "Updated: " +  monthName[modiDate.getMonth()] + " " + modiDate.getDate() + ", " + modiDate.getFullYear();
  }

