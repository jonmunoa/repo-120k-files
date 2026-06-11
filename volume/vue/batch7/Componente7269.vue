<template>
  <section class="panel-7269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7269");
const base = ref(7269);
const total = computed(() => base.value * 2);

function incrementar7269() {
  base.value++;
}
</script>
