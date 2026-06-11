<template>
  <section class="panel-5753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5753");
const base = ref(5753);
const total = computed(() => base.value * 2);

function incrementar5753() {
  base.value++;
}
</script>
