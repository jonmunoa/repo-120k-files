<template>
  <section class="panel-54629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54629");
const base = ref(54629);
const total = computed(() => base.value * 2);

function incrementar54629() {
  base.value++;
}
</script>
