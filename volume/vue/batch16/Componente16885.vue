<template>
  <section class="panel-16885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16885");
const base = ref(16885);
const total = computed(() => base.value * 2);

function incrementar16885() {
  base.value++;
}
</script>
