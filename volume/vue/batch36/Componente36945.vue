<template>
  <section class="panel-36945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36945");
const base = ref(36945);
const total = computed(() => base.value * 2);

function incrementar36945() {
  base.value++;
}
</script>
