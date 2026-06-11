<template>
  <section class="panel-36753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36753");
const base = ref(36753);
const total = computed(() => base.value * 2);

function incrementar36753() {
  base.value++;
}
</script>
