<template>
  <section class="panel-54269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54269");
const base = ref(54269);
const total = computed(() => base.value * 2);

function incrementar54269() {
  base.value++;
}
</script>
