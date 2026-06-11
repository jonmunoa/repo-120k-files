<template>
  <section class="panel-36197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36197");
const base = ref(36197);
const total = computed(() => base.value * 2);

function incrementar36197() {
  base.value++;
}
</script>
