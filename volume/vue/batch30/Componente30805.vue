<template>
  <section class="panel-30805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30805");
const base = ref(30805);
const total = computed(() => base.value * 2);

function incrementar30805() {
  base.value++;
}
</script>
