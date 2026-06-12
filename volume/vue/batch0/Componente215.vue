<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item215",
  props: { etiqueta: { type: String, default: "item-215-v2" } }
};
</script>
