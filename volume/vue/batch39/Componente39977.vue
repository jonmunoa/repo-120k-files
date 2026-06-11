<template>
  <section class="panel-39977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39977");
const base = ref(39977);
const total = computed(() => base.value * 2);

function incrementar39977() {
  base.value++;
}
</script>
