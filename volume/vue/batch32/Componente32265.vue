<template>
  <section class="panel-32265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32265");
const base = ref(32265);
const total = computed(() => base.value * 2);

function incrementar32265() {
  base.value++;
}
</script>
