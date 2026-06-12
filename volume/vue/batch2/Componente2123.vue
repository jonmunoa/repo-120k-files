<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item2123",
  props: { etiqueta: { type: String, default: "item-2123-v2" } }
};
</script>
