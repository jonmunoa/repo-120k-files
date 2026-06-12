<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item5999",
  props: { etiqueta: { type: String, default: "item-5999-v2" } }
};
</script>
