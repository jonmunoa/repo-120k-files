<template>
  <section class="panel-19129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19129");
const base = ref(19129);
const total = computed(() => base.value * 2);

function incrementar19129() {
  base.value++;
}
</script>
