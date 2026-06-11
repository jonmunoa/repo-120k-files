<template>
  <section class="panel-35137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35137");
const base = ref(35137);
const total = computed(() => base.value * 2);

function incrementar35137() {
  base.value++;
}
</script>
