<template>
  <section class="panel-237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 237");
const base = ref(237);
const total = computed(() => base.value * 2);

function incrementar237() {
  base.value++;
}
</script>
