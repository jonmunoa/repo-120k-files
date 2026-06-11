<template>
  <section class="panel-3509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3509");
const base = ref(3509);
const total = computed(() => base.value * 2);

function incrementar3509() {
  base.value++;
}
</script>
