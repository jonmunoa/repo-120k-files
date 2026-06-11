<template>
  <section class="panel-50397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50397");
const base = ref(50397);
const total = computed(() => base.value * 2);

function incrementar50397() {
  base.value++;
}
</script>
