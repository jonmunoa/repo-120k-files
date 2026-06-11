<template>
  <section class="panel-365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 365");
const base = ref(365);
const total = computed(() => base.value * 2);

function incrementar365() {
  base.value++;
}
</script>
