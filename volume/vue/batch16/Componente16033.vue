<template>
  <section class="panel-16033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16033");
const base = ref(16033);
const total = computed(() => base.value * 2);

function incrementar16033() {
  base.value++;
}
</script>
