<template>
  <section class="panel-5169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5169");
const base = ref(5169);
const total = computed(() => base.value * 2);

function incrementar5169() {
  base.value++;
}
</script>
