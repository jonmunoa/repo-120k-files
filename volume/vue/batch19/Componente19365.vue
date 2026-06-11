<template>
  <section class="panel-19365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19365");
const base = ref(19365);
const total = computed(() => base.value * 2);

function incrementar19365() {
  base.value++;
}
</script>
