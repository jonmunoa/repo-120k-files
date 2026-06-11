<template>
  <section class="panel-41753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41753");
const base = ref(41753);
const total = computed(() => base.value * 2);

function incrementar41753() {
  base.value++;
}
</script>
