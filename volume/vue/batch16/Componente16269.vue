<template>
  <section class="panel-16269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16269");
const base = ref(16269);
const total = computed(() => base.value * 2);

function incrementar16269() {
  base.value++;
}
</script>
