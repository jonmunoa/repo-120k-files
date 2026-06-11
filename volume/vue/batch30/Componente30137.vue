<template>
  <section class="panel-30137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30137");
const base = ref(30137);
const total = computed(() => base.value * 2);

function incrementar30137() {
  base.value++;
}
</script>
