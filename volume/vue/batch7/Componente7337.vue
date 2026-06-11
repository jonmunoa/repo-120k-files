<template>
  <section class="panel-7337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7337");
const base = ref(7337);
const total = computed(() => base.value * 2);

function incrementar7337() {
  base.value++;
}
</script>
