<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item6543",
  props: { etiqueta: { type: String, default: "item-6543-v2" } }
};
</script>
