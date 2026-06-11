<template>
  <section class="panel-50237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50237");
const base = ref(50237);
const total = computed(() => base.value * 2);

function incrementar50237() {
  base.value++;
}
</script>
