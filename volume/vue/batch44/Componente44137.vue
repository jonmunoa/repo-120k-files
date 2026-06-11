<template>
  <section class="panel-44137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44137");
const base = ref(44137);
const total = computed(() => base.value * 2);

function incrementar44137() {
  base.value++;
}
</script>
