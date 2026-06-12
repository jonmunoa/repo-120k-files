<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item12123",
  props: { etiqueta: { type: String, default: "item-12123-v2" } }
};
</script>
