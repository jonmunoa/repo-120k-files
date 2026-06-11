<template>
  <section class="panel-23169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23169");
const base = ref(23169);
const total = computed(() => base.value * 2);

function incrementar23169() {
  base.value++;
}
</script>
