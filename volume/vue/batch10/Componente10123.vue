<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item10123",
  props: { etiqueta: { type: String, default: "item-10123-v2" } }
};
</script>
