<template>
  <section class="panel-21453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21453");
const base = ref(21453);
const total = computed(() => base.value * 2);

function incrementar21453() {
  base.value++;
}
</script>
