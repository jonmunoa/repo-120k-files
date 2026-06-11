<template>
  <section class="panel-36341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36341");
const base = ref(36341);
const total = computed(() => base.value * 2);

function incrementar36341() {
  base.value++;
}
</script>
