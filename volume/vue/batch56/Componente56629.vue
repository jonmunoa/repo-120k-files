<template>
  <section class="panel-56629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56629");
const base = ref(56629);
const total = computed(() => base.value * 2);

function incrementar56629() {
  base.value++;
}
</script>
