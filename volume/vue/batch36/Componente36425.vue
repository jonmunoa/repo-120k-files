<template>
  <section class="panel-36425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36425");
const base = ref(36425);
const total = computed(() => base.value * 2);

function incrementar36425() {
  base.value++;
}
</script>
