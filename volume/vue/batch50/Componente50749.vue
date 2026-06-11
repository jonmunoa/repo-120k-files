<template>
  <section class="panel-50749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50749");
const base = ref(50749);
const total = computed(() => base.value * 2);

function incrementar50749() {
  base.value++;
}
</script>
