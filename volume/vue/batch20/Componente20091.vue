<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item20091",
  props: { etiqueta: { type: String, default: "item-20091-v2" } }
};
</script>
