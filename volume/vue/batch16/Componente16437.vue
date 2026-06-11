<template>
  <section class="panel-16437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16437");
const base = ref(16437);
const total = computed(() => base.value * 2);

function incrementar16437() {
  base.value++;
}
</script>
