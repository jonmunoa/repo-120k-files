<template>
  <section class="panel-9129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9129");
const base = ref(9129);
const total = computed(() => base.value * 2);

function incrementar9129() {
  base.value++;
}
</script>
