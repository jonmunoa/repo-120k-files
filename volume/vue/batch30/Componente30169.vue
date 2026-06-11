<template>
  <section class="panel-30169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30169");
const base = ref(30169);
const total = computed(() => base.value * 2);

function incrementar30169() {
  base.value++;
}
</script>
