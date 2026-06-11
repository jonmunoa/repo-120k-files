<template>
  <section class="panel-56173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56173");
const base = ref(56173);
const total = computed(() => base.value * 2);

function incrementar56173() {
  base.value++;
}
</script>
