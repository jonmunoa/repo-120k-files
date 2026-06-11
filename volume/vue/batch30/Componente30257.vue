<template>
  <section class="panel-30257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30257");
const base = ref(30257);
const total = computed(() => base.value * 2);

function incrementar30257() {
  base.value++;
}
</script>
