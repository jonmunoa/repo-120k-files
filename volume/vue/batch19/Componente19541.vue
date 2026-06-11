<template>
  <section class="panel-19541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19541");
const base = ref(19541);
const total = computed(() => base.value * 2);

function incrementar19541() {
  base.value++;
}
</script>
