<template>
  <section class="panel-43629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43629");
const base = ref(43629);
const total = computed(() => base.value * 2);

function incrementar43629() {
  base.value++;
}
</script>
