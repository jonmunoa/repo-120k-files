<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item30003",
  props: { etiqueta: { type: String, default: "item-30003-v2" } }
};
</script>
