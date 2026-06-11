<template>
  <div class="componente-23024">
    <p>{{ mensaje23024 }}</p>
    <button @click="accion0">Accion 0</button>
    <button @click="accion1">Accion 1</button>
    <button @click="accion2">Accion 2</button>
  </div>
</template>

<script>
export default {
  name: "Componente23024",
  data() {
    return { mensaje23024: "valor 23024", contador: 0 };
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
