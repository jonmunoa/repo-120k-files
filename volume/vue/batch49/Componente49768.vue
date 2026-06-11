<template>
  <div class="componente-49768">
    <p>{{ mensaje49768 }}</p>
    <button @click="accion0">Accion 0</button>
    <button @click="accion1">Accion 1</button>
  </div>
</template>

<script>
export default {
  name: "Componente49768",
  data() {
    return { mensaje49768: "valor 49768", contador: 0 };
  },
  computed: {
    doble() { return this.contador * 2; }
  },
  methods: {
    accion0() { this.contador += 1; }
    accion1() { this.contador += 2; }
  },
  watch: {
    contador(nuevo, viejo) { console.log(nuevo, viejo); }
  }
};
</script>
