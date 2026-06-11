<template>
  <section class="panel-36581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36581");
const base = ref(36581);
const total = computed(() => base.value * 2);

function incrementar36581() {
  base.value++;
}
</script>
