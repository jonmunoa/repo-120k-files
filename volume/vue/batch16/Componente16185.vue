<template>
  <section class="panel-16185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16185");
const base = ref(16185);
const total = computed(() => base.value * 2);

function incrementar16185() {
  base.value++;
}
</script>
