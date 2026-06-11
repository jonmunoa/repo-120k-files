<template>
  <section class="panel-4169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4169");
const base = ref(4169);
const total = computed(() => base.value * 2);

function incrementar4169() {
  base.value++;
}
</script>
