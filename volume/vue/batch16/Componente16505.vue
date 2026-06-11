<template>
  <section class="panel-16505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16505");
const base = ref(16505);
const total = computed(() => base.value * 2);

function incrementar16505() {
  base.value++;
}
</script>
