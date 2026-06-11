<template>
  <section class="panel-1341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1341");
const base = ref(1341);
const total = computed(() => base.value * 2);

function incrementar1341() {
  base.value++;
}
</script>
