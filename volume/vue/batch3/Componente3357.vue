<template>
  <section class="panel-3357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3357");
const base = ref(3357);
const total = computed(() => base.value * 2);

function incrementar3357() {
  base.value++;
}
</script>
