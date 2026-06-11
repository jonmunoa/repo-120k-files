<template>
  <section class="panel-16369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16369");
const base = ref(16369);
const total = computed(() => base.value * 2);

function incrementar16369() {
  base.value++;
}
</script>
