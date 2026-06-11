<template>
  <section class="panel-31753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31753");
const base = ref(31753);
const total = computed(() => base.value * 2);

function incrementar31753() {
  base.value++;
}
</script>
