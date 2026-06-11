<template>
  <section class="panel-15169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15169");
const base = ref(15169);
const total = computed(() => base.value * 2);

function incrementar15169() {
  base.value++;
}
</script>
