<template>
  <section class="panel-10417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10417");
const base = ref(10417);
const total = computed(() => base.value * 2);

function incrementar10417() {
  base.value++;
}
</script>
