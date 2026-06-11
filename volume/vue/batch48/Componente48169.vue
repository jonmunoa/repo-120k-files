<template>
  <section class="panel-48169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48169");
const base = ref(48169);
const total = computed(() => base.value * 2);

function incrementar48169() {
  base.value++;
}
</script>
