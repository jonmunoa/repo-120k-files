<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item3011",
  props: { etiqueta: { type: String, default: "item-3011-v2" } }
};
</script>
