<template>
  <section class="panel-31629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31629");
const base = ref(31629);
const total = computed(() => base.value * 2);

function incrementar31629() {
  base.value++;
}
</script>
