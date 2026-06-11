<template>
  <section class="panel-41453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41453");
const base = ref(41453);
const total = computed(() => base.value * 2);

function incrementar41453() {
  base.value++;
}
</script>
