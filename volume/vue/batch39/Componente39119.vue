<template>
  <div>
    <p>{{ etiqueta }}: {{ valorFormateado }}</p>
  </div>
</template>

<script>
export default {
  name: "Item39119",
  props: {
    etiqueta: { type: String, default: "item-39119" },
    valor: { type: Number, default: 39119 },
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
.item-39119 { color: blue; }
</style>
