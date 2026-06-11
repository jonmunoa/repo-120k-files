<template>
  <section class="panel-18505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18505");
const base = ref(18505);
const total = computed(() => base.value * 2);

function incrementar18505() {
  base.value++;
}
</script>
