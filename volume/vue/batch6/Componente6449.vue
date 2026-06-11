<template>
  <section class="panel-6449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6449");
const base = ref(6449);
const total = computed(() => base.value * 2);

function incrementar6449() {
  base.value++;
}
</script>
