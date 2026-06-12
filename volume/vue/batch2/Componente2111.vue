<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item2111",
  props: { etiqueta: { type: String, default: "item-2111-v2" } }
};
</script>
