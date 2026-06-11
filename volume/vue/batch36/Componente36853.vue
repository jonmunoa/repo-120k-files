<template>
  <section class="panel-36853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36853");
const base = ref(36853);
const total = computed(() => base.value * 2);

function incrementar36853() {
  base.value++;
}
</script>
