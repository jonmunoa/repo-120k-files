<template>
  <section class="panel-31321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31321");
const base = ref(31321);
const total = computed(() => base.value * 2);

function incrementar31321() {
  base.value++;
}
</script>
