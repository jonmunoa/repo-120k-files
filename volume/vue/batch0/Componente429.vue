<template>
  <section class="panel-429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 429");
const base = ref(429);
const total = computed(() => base.value * 2);

function incrementar429() {
  base.value++;
}
</script>
