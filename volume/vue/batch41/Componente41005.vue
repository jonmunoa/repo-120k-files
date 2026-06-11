<template>
  <section class="panel-41005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41005");
const base = ref(41005);
const total = computed(() => base.value * 2);

function incrementar41005() {
  base.value++;
}
</script>
