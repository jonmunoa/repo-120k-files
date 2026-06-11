<template>
  <section class="panel-28129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28129");
const base = ref(28129);
const total = computed(() => base.value * 2);

function incrementar28129() {
  base.value++;
}
</script>
