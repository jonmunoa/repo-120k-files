<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42007",
  props: { etiqueta: { type: String, default: "item-42007-v2" } }
};
</script>
