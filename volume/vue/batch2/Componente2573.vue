<template>
  <section class="panel-2573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2573");
const base = ref(2573);
const total = computed(() => base.value * 2);

function incrementar2573() {
  base.value++;
}
</script>
