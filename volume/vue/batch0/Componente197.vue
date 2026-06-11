<template>
  <section class="panel-197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 197");
const base = ref(197);
const total = computed(() => base.value * 2);

function incrementar197() {
  base.value++;
}
</script>
