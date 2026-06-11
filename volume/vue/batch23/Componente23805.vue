<template>
  <section class="panel-23805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23805");
const base = ref(23805);
const total = computed(() => base.value * 2);

function incrementar23805() {
  base.value++;
}
</script>
