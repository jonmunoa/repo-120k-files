<template>
  <div class="componente-13116">
    <p>{{ mensaje13116 }}</p>
    <button @click="accion0">Accion 0</button>
  </div>
</template>

<script>
export default {
  name: "Componente13116",
  data() {
    return { mensaje13116: "valor 13116", contador: 0 };
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
