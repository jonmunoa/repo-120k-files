<template>
  <section class="panel-4297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4297");
const base = ref(4297);
const total = computed(() => base.value * 2);

function incrementar4297() {
  base.value++;
}
</script>
