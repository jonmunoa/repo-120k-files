<template>
  <section class="panel-36169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36169");
const base = ref(36169);
const total = computed(() => base.value * 2);

function incrementar36169() {
  base.value++;
}
</script>
