<template>
  <section class="panel-42673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42673");
const base = ref(42673);
const total = computed(() => base.value * 2);

function incrementar42673() {
  base.value++;
}
</script>
