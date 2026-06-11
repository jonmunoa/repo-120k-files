<template>
  <section class="panel-43581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43581");
const base = ref(43581);
const total = computed(() => base.value * 2);

function incrementar43581() {
  base.value++;
}
</script>
