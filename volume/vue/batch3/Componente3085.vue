<template>
  <section class="panel-3085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3085");
const base = ref(3085);
const total = computed(() => base.value * 2);

function incrementar3085() {
  base.value++;
}
</script>
