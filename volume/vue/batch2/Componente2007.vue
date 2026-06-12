<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item2007",
  props: { etiqueta: { type: String, default: "item-2007-v2" } }
};
</script>
