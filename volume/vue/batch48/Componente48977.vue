<template>
  <section class="panel-48977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48977");
const base = ref(48977);
const total = computed(() => base.value * 2);

function incrementar48977() {
  base.value++;
}
</script>
