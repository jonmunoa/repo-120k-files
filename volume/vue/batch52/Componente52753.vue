<template>
  <section class="panel-52753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52753");
const base = ref(52753);
const total = computed(() => base.value * 2);

function incrementar52753() {
  base.value++;
}
</script>
