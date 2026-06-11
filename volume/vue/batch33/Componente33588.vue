<template>
  <div class="componente-33588">
    <p>{{ mensaje33588 }}</p>
    <button @click="accion0">Accion 0</button>
  </div>
</template>

<script>
export default {
  name: "Componente33588",
  data() {
    return { mensaje33588: "valor 33588", contador: 0 };
  },
  computed: {
    doble() { return this.contador * 2; }
  },
  methods: {
    accion0() { this.contador += 1; }
  },
  watch: {
    contador(nuevo, viejo) { console.log(nuevo, viejo); }
  }
};
</script>
