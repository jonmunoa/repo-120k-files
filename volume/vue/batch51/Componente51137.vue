<template>
  <section class="panel-51137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51137");
const base = ref(51137);
const total = computed(() => base.value * 2);

function incrementar51137() {
  base.value++;
}
</script>
