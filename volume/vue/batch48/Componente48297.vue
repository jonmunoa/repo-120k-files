<template>
  <section class="panel-48297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48297");
const base = ref(48297);
const total = computed(() => base.value * 2);

function incrementar48297() {
  base.value++;
}
</script>
