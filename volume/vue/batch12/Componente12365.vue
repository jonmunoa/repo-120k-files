<template>
  <section class="panel-12365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12365");
const base = ref(12365);
const total = computed(() => base.value * 2);

function incrementar12365() {
  base.value++;
}
</script>
