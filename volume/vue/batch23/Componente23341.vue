<template>
  <section class="panel-23341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23341");
const base = ref(23341);
const total = computed(() => base.value * 2);

function incrementar23341() {
  base.value++;
}
</script>
