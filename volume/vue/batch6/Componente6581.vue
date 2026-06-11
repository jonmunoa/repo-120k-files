<template>
  <section class="panel-6581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6581");
const base = ref(6581);
const total = computed(() => base.value * 2);

function incrementar6581() {
  base.value++;
}
</script>
