<template>
  <section class="panel-24197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24197");
const base = ref(24197);
const total = computed(() => base.value * 2);

function incrementar24197() {
  base.value++;
}
</script>
