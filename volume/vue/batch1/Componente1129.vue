<template>
  <section class="panel-1129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1129");
const base = ref(1129);
const total = computed(() => base.value * 2);

function incrementar1129() {
  base.value++;
}
</script>
