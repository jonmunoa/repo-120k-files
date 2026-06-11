<template>
  <section class="panel-10129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10129");
const base = ref(10129);
const total = computed(() => base.value * 2);

function incrementar10129() {
  base.value++;
}
</script>
