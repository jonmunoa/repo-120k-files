<template>
  <section class="panel-6593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6593");
const base = ref(6593);
const total = computed(() => base.value * 2);

function incrementar6593() {
  base.value++;
}
</script>
