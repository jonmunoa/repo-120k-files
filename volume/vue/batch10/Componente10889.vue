<template>
  <section class="panel-10889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10889");
const base = ref(10889);
const total = computed(() => base.value * 2);

function incrementar10889() {
  base.value++;
}
</script>
