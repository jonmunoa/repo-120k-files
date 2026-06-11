<template>
  <section class="panel-41901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41901");
const base = ref(41901);
const total = computed(() => base.value * 2);

function incrementar41901() {
  base.value++;
}
</script>
