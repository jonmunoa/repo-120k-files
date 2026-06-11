<template>
  <div>
    <p>{{ etiqueta }}: {{ valorFormateado }}</p>
  </div>
</template>

<script>
export default {
  name: "Item2115",
  props: {
    etiqueta: { type: String, default: "item-2115" },
    valor: { type: Number, default: 2115 },
    activo: { type: Boolean, default: false }
  },
  computed: {
    valorFormateado() {
      return this.activo ? this.valor * 1.1 : this.valor;
    }
  },
  watch: {
    valor(nuevo) {
      this.$emit("cambio", nuevo);
    },
    activo(nuevo) {
      this.$emit("toggle", nuevo);
    }
  }
};
</script>

<style scoped>
.item-2115 { color: blue; }
</style>
