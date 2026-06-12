<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42455",
  props: { etiqueta: { type: String, default: "item-42455-v2" } }
};
</script>
