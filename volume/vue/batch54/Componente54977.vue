<template>
  <section class="panel-54977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54977");
const base = ref(54977);
const total = computed(() => base.value * 2);

function incrementar54977() {
  base.value++;
}
</script>
