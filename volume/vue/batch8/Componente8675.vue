<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item8675",
  props: { etiqueta: { type: String, default: "item-8675-v2" } }
};
</script>
