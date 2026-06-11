<template>
  <section class="panel-1901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1901");
const base = ref(1901);
const total = computed(() => base.value * 2);

function incrementar1901() {
  base.value++;
}
</script>
