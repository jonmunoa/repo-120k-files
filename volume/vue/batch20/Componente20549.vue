<template>
  <section class="panel-20549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20549");
const base = ref(20549);
const total = computed(() => base.value * 2);

function incrementar20549() {
  base.value++;
}
</script>
