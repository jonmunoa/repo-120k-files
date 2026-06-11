<template>
  <section class="panel-41549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41549");
const base = ref(41549);
const total = computed(() => base.value * 2);

function incrementar41549() {
  base.value++;
}
</script>
