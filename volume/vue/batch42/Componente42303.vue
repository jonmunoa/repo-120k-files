<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42303",
  props: { etiqueta: { type: String, default: "item-42303-v2" } }
};
</script>
