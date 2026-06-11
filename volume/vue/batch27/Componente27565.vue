<template>
  <section class="panel-27565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27565");
const base = ref(27565);
const total = computed(() => base.value * 2);

function incrementar27565() {
  base.value++;
}
</script>
