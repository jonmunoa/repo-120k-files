<template>
  <section class="panel-53613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53613");
const base = ref(53613);
const total = computed(() => base.value * 2);

function incrementar53613() {
  base.value++;
}
</script>
