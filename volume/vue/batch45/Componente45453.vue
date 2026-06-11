<template>
  <section class="panel-45453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45453");
const base = ref(45453);
const total = computed(() => base.value * 2);

function incrementar45453() {
  base.value++;
}
</script>
