<template>
  <section class="panel-56129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56129");
const base = ref(56129);
const total = computed(() => base.value * 2);

function incrementar56129() {
  base.value++;
}
</script>
