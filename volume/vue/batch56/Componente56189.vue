<template>
  <section class="panel-56189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56189");
const base = ref(56189);
const total = computed(() => base.value * 2);

function incrementar56189() {
  base.value++;
}
</script>
