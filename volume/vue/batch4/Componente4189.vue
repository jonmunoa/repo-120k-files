<template>
  <section class="panel-4189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4189");
const base = ref(4189);
const total = computed(() => base.value * 2);

function incrementar4189() {
  base.value++;
}
</script>
