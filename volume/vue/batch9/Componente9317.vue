<template>
  <section class="panel-9317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9317");
const base = ref(9317);
const total = computed(() => base.value * 2);

function incrementar9317() {
  base.value++;
}
</script>
