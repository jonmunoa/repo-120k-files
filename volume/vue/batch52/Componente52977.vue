<template>
  <section class="panel-52977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52977");
const base = ref(52977);
const total = computed(() => base.value * 2);

function incrementar52977() {
  base.value++;
}
</script>
