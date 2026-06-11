<template>
  <section class="panel-6321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6321");
const base = ref(6321);
const total = computed(() => base.value * 2);

function incrementar6321() {
  base.value++;
}
</script>
