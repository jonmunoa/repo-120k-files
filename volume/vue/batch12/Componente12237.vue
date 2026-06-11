<template>
  <section class="panel-12237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12237");
const base = ref(12237);
const total = computed(() => base.value * 2);

function incrementar12237() {
  base.value++;
}
</script>
