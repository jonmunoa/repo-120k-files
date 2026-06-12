<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item20111",
  props: { etiqueta: { type: String, default: "item-20111-v2" } }
};
</script>
