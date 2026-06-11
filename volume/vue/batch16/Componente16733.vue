<template>
  <section class="panel-16733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16733");
const base = ref(16733);
const total = computed(() => base.value * 2);

function incrementar16733() {
  base.value++;
}
</script>
