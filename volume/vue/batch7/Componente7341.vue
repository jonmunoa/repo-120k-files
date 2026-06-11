<template>
  <section class="panel-7341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7341");
const base = ref(7341);
const total = computed(() => base.value * 2);

function incrementar7341() {
  base.value++;
}
</script>
