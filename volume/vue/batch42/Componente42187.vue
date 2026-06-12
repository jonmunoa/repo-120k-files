<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42187",
  props: { etiqueta: { type: String, default: "item-42187-v2" } }
};
</script>
