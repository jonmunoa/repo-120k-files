<template>
  <section class="panel-53425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53425");
const base = ref(53425);
const total = computed(() => base.value * 2);

function incrementar53425() {
  base.value++;
}
</script>
