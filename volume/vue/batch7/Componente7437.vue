<template>
  <section class="panel-7437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7437");
const base = ref(7437);
const total = computed(() => base.value * 2);

function incrementar7437() {
  base.value++;
}
</script>
