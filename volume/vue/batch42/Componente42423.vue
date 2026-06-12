<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42423",
  props: { etiqueta: { type: String, default: "item-42423-v2" } }
};
</script>
