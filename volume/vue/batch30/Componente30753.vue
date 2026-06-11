<template>
  <section class="panel-30753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30753");
const base = ref(30753);
const total = computed(() => base.value * 2);

function incrementar30753() {
  base.value++;
}
</script>
