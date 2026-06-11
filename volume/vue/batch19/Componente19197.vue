<template>
  <section class="panel-19197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19197");
const base = ref(19197);
const total = computed(() => base.value * 2);

function incrementar19197() {
  base.value++;
}
</script>
