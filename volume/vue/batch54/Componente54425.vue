<template>
  <section class="panel-54425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54425");
const base = ref(54425);
const total = computed(() => base.value * 2);

function incrementar54425() {
  base.value++;
}
</script>
