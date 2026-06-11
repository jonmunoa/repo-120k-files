<template>
  <section class="panel-32129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32129");
const base = ref(32129);
const total = computed(() => base.value * 2);

function incrementar32129() {
  base.value++;
}
</script>
