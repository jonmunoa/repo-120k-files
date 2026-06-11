<template>
  <section class="panel-10209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10209");
const base = ref(10209);
const total = computed(() => base.value * 2);

function incrementar10209() {
  base.value++;
}
</script>
