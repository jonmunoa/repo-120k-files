<template>
  <section class="panel-50137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50137");
const base = ref(50137);
const total = computed(() => base.value * 2);

function incrementar50137() {
  base.value++;
}
</script>
