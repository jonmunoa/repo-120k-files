<template>
  <section class="panel-30573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30573");
const base = ref(30573);
const total = computed(() => base.value * 2);

function incrementar30573() {
  base.value++;
}
</script>
