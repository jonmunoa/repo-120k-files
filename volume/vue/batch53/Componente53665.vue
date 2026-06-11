<template>
  <section class="panel-53665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53665");
const base = ref(53665);
const total = computed(() => base.value * 2);

function incrementar53665() {
  base.value++;
}
</script>
