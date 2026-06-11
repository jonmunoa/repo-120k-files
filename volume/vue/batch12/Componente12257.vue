<template>
  <section class="panel-12257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12257");
const base = ref(12257);
const total = computed(() => base.value * 2);

function incrementar12257() {
  base.value++;
}
</script>
