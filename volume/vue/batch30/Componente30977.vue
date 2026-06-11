<template>
  <section class="panel-30977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30977");
const base = ref(30977);
const total = computed(() => base.value * 2);

function incrementar30977() {
  base.value++;
}
</script>
