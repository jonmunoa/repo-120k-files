<template>
  <section class="panel-56505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56505");
const base = ref(56505);
const total = computed(() => base.value * 2);

function incrementar56505() {
  base.value++;
}
</script>
