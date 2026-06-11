<template>
  <section class="panel-36957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36957");
const base = ref(36957);
const total = computed(() => base.value * 2);

function incrementar36957() {
  base.value++;
}
</script>
