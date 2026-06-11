<template>
  <section class="panel-7129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7129");
const base = ref(7129);
const total = computed(() => base.value * 2);

function incrementar7129() {
  base.value++;
}
</script>
