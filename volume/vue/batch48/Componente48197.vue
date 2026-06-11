<template>
  <section class="panel-48197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48197");
const base = ref(48197);
const total = computed(() => base.value * 2);

function incrementar48197() {
  base.value++;
}
</script>
