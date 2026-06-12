<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item903",
  props: { etiqueta: { type: String, default: "item-903-v2" } }
};
</script>
