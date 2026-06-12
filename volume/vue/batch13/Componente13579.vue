<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item13579",
  props: { etiqueta: { type: String, default: "item-13579-v2" } }
};
</script>
