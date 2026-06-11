<template>
  <section class="panel-50321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50321");
const base = ref(50321);
const total = computed(() => base.value * 2);

function incrementar50321() {
  base.value++;
}
</script>
