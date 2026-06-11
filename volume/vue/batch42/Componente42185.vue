<template>
  <section class="panel-42185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42185");
const base = ref(42185);
const total = computed(() => base.value * 2);

function incrementar42185() {
  base.value++;
}
</script>
