<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item83",
  props: { etiqueta: { type: String, default: "item-83-v2" } }
};
</script>
