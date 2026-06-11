<template>
  <section class="panel-16417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16417");
const base = ref(16417);
const total = computed(() => base.value * 2);

function incrementar16417() {
  base.value++;
}
</script>
