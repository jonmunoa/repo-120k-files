<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42275",
  props: { etiqueta: { type: String, default: "item-42275-v2" } }
};
</script>
