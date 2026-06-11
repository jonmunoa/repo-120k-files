<template>
  <section class="panel-41221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41221");
const base = ref(41221);
const total = computed(() => base.value * 2);

function incrementar41221() {
  base.value++;
}
</script>
