<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42003",
  props: { etiqueta: { type: String, default: "item-42003-v2" } }
};
</script>
