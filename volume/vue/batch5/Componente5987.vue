<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item5987",
  props: { etiqueta: { type: String, default: "item-5987-v2" } }
};
</script>
