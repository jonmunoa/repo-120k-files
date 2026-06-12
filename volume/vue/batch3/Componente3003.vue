<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item3003",
  props: { etiqueta: { type: String, default: "item-3003-v2" } }
};
</script>
