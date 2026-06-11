<template>
  <section class="panel-34265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34265");
const base = ref(34265);
const total = computed(() => base.value * 2);

function incrementar34265() {
  base.value++;
}
</script>
