<template>
  <section class="panel-53213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53213");
const base = ref(53213);
const total = computed(() => base.value * 2);

function incrementar53213() {
  base.value++;
}
</script>
