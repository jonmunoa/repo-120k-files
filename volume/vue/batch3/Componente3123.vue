<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item3123",
  props: { etiqueta: { type: String, default: "item-3123-v2" } }
};
</script>
