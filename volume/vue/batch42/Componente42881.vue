<template>
  <section class="panel-42881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42881");
const base = ref(42881);
const total = computed(() => base.value * 2);

function incrementar42881() {
  base.value++;
}
</script>
