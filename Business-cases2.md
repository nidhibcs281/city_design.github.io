<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Business Cases and SDG Alignment</title>
  <style>
    body {  
  font-family: Arial, sans-serif;  /* Set a modern font for the body */  
  background-color: #f7f9fc;  /* Light background color for contrast */  
  color: #555;  /* Darker text color for better readability */  
}  

.container {  
  width: 80%;  
  margin: 50px auto;  
  background-color: #fff;  
  padding: 20px;  
  box-shadow: 0 4px 10px rgba(0, 0, 0, 0.2);  /* More pronounced shadow */  
  border-radius: 10px;  
  border: 1px solid #ddd;  /* Adds a light border around the container */  
}  

h1, h2 {  
  color: #2c3e50;  /* Darker color for headings */  
  text-align: center;  
}  

h2 {  
  font-size: 1.8em;  
  margin-top: 30px;  
}  

p {  
  font-size: 1.1em;  
  margin-bottom: 15px;  
}  

/* Button styles */  
.sdg-button {  
  display: inline-block;  /* Makes buttons inline */  
  background-color: #3498db;  /* Primary button color */  
  color: #fff;  
  padding: 12px 20px;  /* Padding for buttons */  
  border: none;  /* No borders */  
  border-radius: 5px;  /* Rounded corners */  
  font-size: 1em;  
  text-decoration: none;  /* Removes underline from links */  
  margin-right: 10px;  /* Space between buttons */  
  transition: background-color 0.3s ease;  /* Smooth transition for hover effect */  
}  

.sdg-button:hover {  
  background-color: #2980b9;  /* Darker shade on hover */  
}  

/* SDG Container Styles */  
.sdg {  
  background-color: #e0f7fa;  
  padding: 10px;  
  border-radius: 5px;  
  margin-bottom: 10px;  
}  

.sdg-title {  
  font-weight: bold;  
}  

.algorithm-section {  
  background-color: #f1f8e9;  
  border-left: 4px solid #4caf50;  
  padding: 15px;  
  margin-bottom: 20px;  
}  

.algorithm-title {  
  font-weight: bold;  
}  

.sub-sdgs {  
  font-size: 1.1em;  
  margin-bottom: 10px;  
}  

.target {  
  font-style: italic;  
  color: #0288d1;  
}
  </style>
</head>
<body>

  <div class="container">
    <h1>Business Cases and SDG Alignment</h1>

    <section>
      <h2>1. Providing Wi-Fi Networks in Public Spaces Offering Affordable Internet Access</h2>

      <div class="sdg">
        <p class="sdg-title">SDG 9: Industry, Innovation, and Infrastructure</p>
        <p>9.c.1 - Proportion of population covered by a mobile network, by technology.</p>
        <p class="target">Target: 9.c - Significantly increase access to information and communications technology and strive to provide universal and affordable access to the internet in least developed countries.</p>
      </div>

      <div class="sdg">
        <p class="sdg-title">SDG 10: Reduced Inequalities</p>
        <p>10.2.1 - Proportion of individuals who own a mobile telephone, by sex, age, and location.</p>
        <p class="target">Target: 10.2 - By 2030, empower and promote the social, economic, and political inclusion of all, irrespective of age, sex, disability, race, ethnicity, origin, religion, or economic or other status.</p>
      </div>

      <div class="algorithm-section">
        <p class="algorithm-title">Data Structures and Algorithms:</p>
        <ul>
          <li><b>Hashing:</b> For efficient lookup and management of users and their devices across different public Wi-Fi access points.</li>
          <li><b>Dijkstra's Algorithm:</b> To determine the best paths for distributing internet traffic and optimizing the connectivity between Wi-Fi nodes in a city.</li>
        </ul>
      </div>
    </section>

    <section>
      <h2>2. Unmanned Machines for Urgent Supplies and Disaster Information</h2>

      <div class="sdg">
        <p class="sdg-title">SDG 13: Climate Action</p>
        <p>13.1.1 - Number of deaths, missing persons, and directly affected persons attributed to disasters per 100,000 population.</p>
        <p class="target">Target: 13.1 - Strengthen resilience and adaptive capacity to climate-related hazards and natural disasters in all countries.</p>
      </div>

      <div class="sdg">
        <p class="sdg-title">SDG 11: Sustainable Cities and Communities</p>
        <p>11.5.1 - Number of deaths, missing persons, and persons affected by disasters, including floods, heatwaves, and droughts.</p>
        <p class="target">Target: 11.5 - Significantly reduce the number of deaths and the number of people affected and substantially decrease the direct economic losses relative to global gross domestic product caused by disasters, including water-related disasters.</p>
      </div>

      <div class="algorithm-section">
        <p class="algorithm-title">Data Structures and Algorithms:</p>
        <ul>
          <li><b>BST or AVL Trees:</b> Can organize supply routes or communication networks in a way that optimizes traversal.</li>
          <li><b>Kruskal's algorithm:</b> Used to manage connected components, especially when tracking reachable areas for drones and robots during a disaster.</li>
        </ul>
      </div>
    </section>

    <section>
      <h2>3. Improving Digital Payment Systems for Small Businesses</h2>

      <div class="sdg">
        <p class="sdg-title">SDG 8: Decent Work and Economic Growth</p>
        <p>8.3.1 - Proportion of informal employment in non-agriculture employment, by sex.</p>
        <p class="target">Target: 8.3 - Promote the growth of micro-, small-, and medium-sized enterprises (MSMEs), expand access to financial services, and ensure decent work for all.</p>
      </div>

      <div class="sdg">
        <p class="sdg-title">SDG 9: Industry, Innovation, and Infrastructure</p>
        <p>9.3.2 - Proportion of small-scale industries with a loan or line of credit.</p>
        <p class="target">Target: 9.3 - Increase the access of small-scale industries and businesses to affordable credit, financial services, and digital payments.</p>
      </div>

      <div class="algorithm-section">
        <p class="algorithm-title">Data Structures and Algorithms:</p>
        <ul>
          <li><b>Hashing/Hash Functions:</b> Ensures secure and efficient lookup of transaction data and user verification in the payment system.</li>
          <li><b>Merge Sort:</b> For sorting transaction records, ensuring quick and efficient processing of payment data.</li>
        </ul>
      </div>
    </section>

  </div>

</body>
</html>
