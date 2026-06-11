<template>
  <section class="panel-16685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16685");
const base = ref(16685);
const total = computed(() => base.value * 2);

function incrementar16685() {
  base.value++;
}
</script>
