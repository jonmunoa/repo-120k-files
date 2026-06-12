<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item11223",
  props: { etiqueta: { type: String, default: "item-11223-v2" } }
};
</script>
