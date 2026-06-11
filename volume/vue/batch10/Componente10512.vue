<template>
  <div class="componente-10512">
    <p>{{ mensaje10512 }}</p>
    <button @click="accion0">Accion 0</button>
  </div>
</template>

<script>
export default {
  name: "Componente10512",
  data() {
    return { mensaje10512: "valor 10512", contador: 0 };
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
