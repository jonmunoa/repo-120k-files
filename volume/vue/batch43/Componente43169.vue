<template>
  <section class="panel-43169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43169");
const base = ref(43169);
const total = computed(() => base.value * 2);

function incrementar43169() {
  base.value++;
}
</script>
