<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item203",
  props: { etiqueta: { type: String, default: "item-203-v2" } }
};
</script>
