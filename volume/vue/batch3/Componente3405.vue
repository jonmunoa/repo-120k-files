<template>
  <section class="panel-3405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3405");
const base = ref(3405);
const total = computed(() => base.value * 2);

function incrementar3405() {
  base.value++;
}
</script>
