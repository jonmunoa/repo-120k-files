<template>
  <section class="panel-6705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6705");
const base = ref(6705);
const total = computed(() => base.value * 2);

function incrementar6705() {
  base.value++;
}
</script>
