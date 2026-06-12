<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item10003",
  props: { etiqueta: { type: String, default: "item-10003-v2" } }
};
</script>
