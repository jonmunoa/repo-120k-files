<template>
  <section class="panel-41197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41197");
const base = ref(41197);
const total = computed(() => base.value * 2);

function incrementar41197() {
  base.value++;
}
</script>
