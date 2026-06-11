<template>
  <section class="panel-16849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16849");
const base = ref(16849);
const total = computed(() => base.value * 2);

function incrementar16849() {
  base.value++;
}
</script>
