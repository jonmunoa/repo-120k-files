<template>
  <section class="panel-16977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16977");
const base = ref(16977);
const total = computed(() => base.value * 2);

function incrementar16977() {
  base.value++;
}
</script>
