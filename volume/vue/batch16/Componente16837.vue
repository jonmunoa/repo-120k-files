<template>
  <section class="panel-16837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16837");
const base = ref(16837);
const total = computed(() => base.value * 2);

function incrementar16837() {
  base.value++;
}
</script>
