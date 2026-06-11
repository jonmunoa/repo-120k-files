<template>
  <div class="componente-57272">
    <p>{{ mensaje57272 }}</p>
    <button @click="accion0">Accion 0</button>
    <button @click="accion1">Accion 1</button>
    <button @click="accion2">Accion 2</button>
  </div>
</template>

<script>
export default {
  name: "Componente57272",
  data() {
    return { mensaje57272: "valor 57272", contador: 0 };
  },
  computed: {
    doble() { return this.contador * 2; }
  },
  methods: {
    accion0() { this.contador += 1; }
    accion1() { this.contador += 2; }
    accion2() { this.contador += 3; }
  },
  watch: {
    contador(nuevo, viejo) { console.log(nuevo, viejo); }
  }
};
</script>
