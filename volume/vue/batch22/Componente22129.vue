<template>
  <section class="panel-22129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22129");
const base = ref(22129);
const total = computed(() => base.value * 2);

function incrementar22129() {
  base.value++;
}
</script>
