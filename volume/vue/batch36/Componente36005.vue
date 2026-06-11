<template>
  <section class="panel-36005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36005");
const base = ref(36005);
const total = computed(() => base.value * 2);

function incrementar36005() {
  base.value++;
}
</script>
