<template>
  <section class="panel-12437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12437");
const base = ref(12437);
const total = computed(() => base.value * 2);

function incrementar12437() {
  base.value++;
}
</script>
