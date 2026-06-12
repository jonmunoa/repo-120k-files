<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item7999",
  props: { etiqueta: { type: String, default: "item-7999-v2" } }
};
</script>
