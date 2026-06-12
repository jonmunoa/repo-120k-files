<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item803",
  props: { etiqueta: { type: String, default: "item-803-v2" } }
};
</script>
