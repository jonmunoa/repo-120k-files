<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42203",
  props: { etiqueta: { type: String, default: "item-42203-v2" } }
};
</script>
