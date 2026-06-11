<template>
  <section class="panel-50901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50901");
const base = ref(50901);
const total = computed(() => base.value * 2);

function incrementar50901() {
  base.value++;
}
</script>
