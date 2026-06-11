<template>
  <section class="panel-8585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8585");
const base = ref(8585);
const total = computed(() => base.value * 2);

function incrementar8585() {
  base.value++;
}
</script>
