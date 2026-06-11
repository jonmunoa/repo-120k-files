<template>
  <section class="panel-3569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3569");
const base = ref(3569);
const total = computed(() => base.value * 2);

function incrementar3569() {
  base.value++;
}
</script>
