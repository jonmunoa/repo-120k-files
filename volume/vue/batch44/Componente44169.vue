<template>
  <section class="panel-44169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44169");
const base = ref(44169);
const total = computed(() => base.value * 2);

function incrementar44169() {
  base.value++;
}
</script>
