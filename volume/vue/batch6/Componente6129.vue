<template>
  <section class="panel-6129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6129");
const base = ref(6129);
const total = computed(() => base.value * 2);

function incrementar6129() {
  base.value++;
}
</script>
