<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item415",
  props: { etiqueta: { type: String, default: "item-415-v2" } }
};
</script>
