<template>
  <section class="panel-27629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27629");
const base = ref(27629);
const total = computed(() => base.value * 2);

function incrementar27629() {
  base.value++;
}
</script>
