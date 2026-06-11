<template>
  <section class="panel-18197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18197");
const base = ref(18197);
const total = computed(() => base.value * 2);

function incrementar18197() {
  base.value++;
}
</script>
