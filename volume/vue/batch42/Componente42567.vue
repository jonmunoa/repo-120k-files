<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42567",
  props: { etiqueta: { type: String, default: "item-42567-v2" } }
};
</script>
