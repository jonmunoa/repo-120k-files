<template>
  <section class="panel-30505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30505");
const base = ref(30505);
const total = computed(() => base.value * 2);

function incrementar30505() {
  base.value++;
}
</script>
