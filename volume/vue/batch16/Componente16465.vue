<template>
  <section class="panel-16465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16465");
const base = ref(16465);
const total = computed(() => base.value * 2);

function incrementar16465() {
  base.value++;
}
</script>
