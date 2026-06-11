<template>
  <section class="panel-30313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30313");
const base = ref(30313);
const total = computed(() => base.value * 2);

function incrementar30313() {
  base.value++;
}
</script>
