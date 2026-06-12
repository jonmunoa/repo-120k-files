<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item255",
  props: { etiqueta: { type: String, default: "item-255-v2" } }
};
</script>
