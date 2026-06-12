<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42235",
  props: { etiqueta: { type: String, default: "item-42235-v2" } }
};
</script>
