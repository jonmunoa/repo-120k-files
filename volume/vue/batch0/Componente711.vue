<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item711",
  props: { etiqueta: { type: String, default: "item-711-v2" } }
};
</script>
