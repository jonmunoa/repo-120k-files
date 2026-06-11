<template>
  <section class="panel-16673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16673");
const base = ref(16673);
const total = computed(() => base.value * 2);

function incrementar16673() {
  base.value++;
}
</script>
