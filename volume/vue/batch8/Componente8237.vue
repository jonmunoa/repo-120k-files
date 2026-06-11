<template>
  <section class="panel-8237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8237");
const base = ref(8237);
const total = computed(() => base.value * 2);

function incrementar8237() {
  base.value++;
}
</script>
