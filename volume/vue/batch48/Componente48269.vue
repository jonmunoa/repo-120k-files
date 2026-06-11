<template>
  <section class="panel-48269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48269");
const base = ref(48269);
const total = computed(() => base.value * 2);

function incrementar48269() {
  base.value++;
}
</script>
