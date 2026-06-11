<template>
  <section class="panel-37453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37453");
const base = ref(37453);
const total = computed(() => base.value * 2);

function incrementar37453() {
  base.value++;
}
</script>
