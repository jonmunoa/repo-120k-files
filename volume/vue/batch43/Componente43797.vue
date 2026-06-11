<template>
  <section class="panel-43797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43797");
const base = ref(43797);
const total = computed(() => base.value * 2);

function incrementar43797() {
  base.value++;
}
</script>
