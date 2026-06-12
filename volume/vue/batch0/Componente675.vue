<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item675",
  props: { etiqueta: { type: String, default: "item-675-v2" } }
};
</script>
