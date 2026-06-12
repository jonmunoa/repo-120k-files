<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item567",
  props: { etiqueta: { type: String, default: "item-567-v2" } }
};
</script>
