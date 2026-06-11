<template>
  <section class="panel-22505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22505");
const base = ref(22505);
const total = computed(() => base.value * 2);

function incrementar22505() {
  base.value++;
}
</script>
