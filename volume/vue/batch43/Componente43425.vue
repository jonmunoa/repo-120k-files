<template>
  <section class="panel-43425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43425");
const base = ref(43425);
const total = computed(() => base.value * 2);

function incrementar43425() {
  base.value++;
}
</script>
