<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item5003",
  props: { etiqueta: { type: String, default: "item-5003-v2" } }
};
</script>
