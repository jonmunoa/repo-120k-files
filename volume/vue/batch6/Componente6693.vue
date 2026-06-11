<template>
  <section class="panel-6693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6693");
const base = ref(6693);
const total = computed(() => base.value * 2);

function incrementar6693() {
  base.value++;
}
</script>
