<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item9003",
  props: { etiqueta: { type: String, default: "item-9003-v2" } }
};
</script>
