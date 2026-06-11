<template>
  <section class="panel-44625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44625");
const base = ref(44625);
const total = computed(() => base.value * 2);

function incrementar44625() {
  base.value++;
}
</script>
