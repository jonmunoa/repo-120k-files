<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item987",
  props: { etiqueta: { type: String, default: "item-987-v2" } }
};
</script>
