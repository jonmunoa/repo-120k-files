<template>
  <section class="panel-16697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16697");
const base = ref(16697);
const total = computed(() => base.value * 2);

function incrementar16697() {
  base.value++;
}
</script>
