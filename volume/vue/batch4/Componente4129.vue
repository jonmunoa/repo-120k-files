<template>
  <section class="panel-4129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4129");
const base = ref(4129);
const total = computed(() => base.value * 2);

function incrementar4129() {
  base.value++;
}
</script>
