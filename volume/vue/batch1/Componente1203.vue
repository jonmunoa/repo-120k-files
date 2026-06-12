<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1203",
  props: { etiqueta: { type: String, default: "item-1203-v2" } }
};
</script>
