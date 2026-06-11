<template>
  <section class="panel-4505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4505");
const base = ref(4505);
const total = computed(() => base.value * 2);

function incrementar4505() {
  base.value++;
}
</script>
