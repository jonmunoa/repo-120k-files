<template>
  <section class="panel-16629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16629");
const base = ref(16629);
const total = computed(() => base.value * 2);

function incrementar16629() {
  base.value++;
}
</script>
