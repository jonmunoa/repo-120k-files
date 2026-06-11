<template>
  <section class="panel-22569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22569");
const base = ref(22569);
const total = computed(() => base.value * 2);

function incrementar22569() {
  base.value++;
}
</script>
