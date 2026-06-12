<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1107",
  props: { etiqueta: { type: String, default: "item-1107-v2" } }
};
</script>
