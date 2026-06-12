<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item9123",
  props: { etiqueta: { type: String, default: "item-9123-v2" } }
};
</script>
