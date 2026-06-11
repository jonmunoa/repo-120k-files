<template>
  <section class="panel-49425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49425");
const base = ref(49425);
const total = computed(() => base.value * 2);

function incrementar49425() {
  base.value++;
}
</script>
