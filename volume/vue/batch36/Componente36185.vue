<template>
  <section class="panel-36185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36185");
const base = ref(36185);
const total = computed(() => base.value * 2);

function incrementar36185() {
  base.value++;
}
</script>
