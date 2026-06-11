<template>
  <section class="panel-37137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37137");
const base = ref(37137);
const total = computed(() => base.value * 2);

function incrementar37137() {
  base.value++;
}
</script>
