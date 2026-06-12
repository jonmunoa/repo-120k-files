<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item8123",
  props: { etiqueta: { type: String, default: "item-8123-v2" } }
};
</script>
