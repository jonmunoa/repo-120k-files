<template>
  <section class="panel-56269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56269");
const base = ref(56269);
const total = computed(() => base.value * 2);

function incrementar56269() {
  base.value++;
}
</script>
