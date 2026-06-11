<template>
  <section class="panel-5197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5197");
const base = ref(5197);
const total = computed(() => base.value * 2);

function incrementar5197() {
  base.value++;
}
</script>
