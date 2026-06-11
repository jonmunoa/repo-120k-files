<template>
  <section class="panel-4269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4269");
const base = ref(4269);
const total = computed(() => base.value * 2);

function incrementar4269() {
  base.value++;
}
</script>
