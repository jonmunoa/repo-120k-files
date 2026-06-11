<template>
  <section class="panel-7549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7549");
const base = ref(7549);
const total = computed(() => base.value * 2);

function incrementar7549() {
  base.value++;
}
</script>
