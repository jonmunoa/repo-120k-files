<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item411",
  props: { etiqueta: { type: String, default: "item-411-v2" } }
};
</script>
