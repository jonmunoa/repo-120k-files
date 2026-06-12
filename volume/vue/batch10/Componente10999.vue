<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item10999",
  props: { etiqueta: { type: String, default: "item-10999-v2" } }
};
</script>
