<template>
  <section class="panel-6733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6733");
const base = ref(6733);
const total = computed(() => base.value * 2);

function incrementar6733() {
  base.value++;
}
</script>
