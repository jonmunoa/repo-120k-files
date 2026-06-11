<template>
  <section class="panel-437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 437");
const base = ref(437);
const total = computed(() => base.value * 2);

function incrementar437() {
  base.value++;
}
</script>
