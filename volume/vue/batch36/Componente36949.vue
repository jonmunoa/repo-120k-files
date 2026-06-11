<template>
  <section class="panel-36949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36949");
const base = ref(36949);
const total = computed(() => base.value * 2);

function incrementar36949() {
  base.value++;
}
</script>
