<template>
  <section class="panel-5629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5629");
const base = ref(5629);
const total = computed(() => base.value * 2);

function incrementar5629() {
  base.value++;
}
</script>
