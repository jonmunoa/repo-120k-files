<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item2003",
  props: { etiqueta: { type: String, default: "item-2003-v2" } }
};
</script>
