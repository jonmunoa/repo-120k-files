<template>
  <section class="panel-48829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48829");
const base = ref(48829);
const total = computed(() => base.value * 2);

function incrementar48829() {
  base.value++;
}
</script>
