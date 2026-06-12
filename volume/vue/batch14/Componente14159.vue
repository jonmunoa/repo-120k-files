<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item14159",
  props: { etiqueta: { type: String, default: "item-14159-v2" } }
};
</script>
