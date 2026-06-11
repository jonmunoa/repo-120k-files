<template>
  <section class="panel-12197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12197");
const base = ref(12197);
const total = computed(() => base.value * 2);

function incrementar12197() {
  base.value++;
}
</script>
