<template>
  <section class="panel-42581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42581");
const base = ref(42581);
const total = computed(() => base.value * 2);

function incrementar42581() {
  base.value++;
}
</script>
