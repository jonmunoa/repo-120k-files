<template>
  <section class="panel-3401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3401");
const base = ref(3401);
const total = computed(() => base.value * 2);

function incrementar3401() {
  base.value++;
}
</script>
