<template>
  <section class="panel-6257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6257");
const base = ref(6257);
const total = computed(() => base.value * 2);

function incrementar6257() {
  base.value++;
}
</script>
