<template>
  <section class="panel-3453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3453");
const base = ref(3453);
const total = computed(() => base.value * 2);

function incrementar3453() {
  base.value++;
}
</script>
