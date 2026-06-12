<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1231",
  props: { etiqueta: { type: String, default: "item-1231-v2" } }
};
</script>
