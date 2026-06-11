<template>
  <section class="panel-23581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23581");
const base = ref(23581);
const total = computed(() => base.value * 2);

function incrementar23581() {
  base.value++;
}
</script>
