<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item211",
  props: { etiqueta: { type: String, default: "item-211-v2" } }
};
</script>
