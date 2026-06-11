<template>
  <section class="panel-9629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9629");
const base = ref(9629);
const total = computed(() => base.value * 2);

function incrementar9629() {
  base.value++;
}
</script>
