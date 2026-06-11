<template>
  <section class="panel-19833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19833");
const base = ref(19833);
const total = computed(() => base.value * 2);

function incrementar19833() {
  base.value++;
}
</script>
