<template>
  <section class="panel-54437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54437");
const base = ref(54437);
const total = computed(() => base.value * 2);

function incrementar54437() {
  base.value++;
}
</script>
