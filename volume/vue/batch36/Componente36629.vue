<template>
  <section class="panel-36629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36629");
const base = ref(36629);
const total = computed(() => base.value * 2);

function incrementar36629() {
  base.value++;
}
</script>
