<template>
  <section class="panel-3213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3213");
const base = ref(3213);
const total = computed(() => base.value * 2);

function incrementar3213() {
  base.value++;
}
</script>
