<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1111",
  props: { etiqueta: { type: String, default: "item-1111-v2" } }
};
</script>
