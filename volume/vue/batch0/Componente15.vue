<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item15",
  props: { etiqueta: { type: String, default: "item-15-v2" } }
};
</script>
