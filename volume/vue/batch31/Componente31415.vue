<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item31415",
  props: { etiqueta: { type: String, default: "item-31415-v2" } }
};
</script>
