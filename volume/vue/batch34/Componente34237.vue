<template>
  <section class="panel-34237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34237");
const base = ref(34237);
const total = computed(() => base.value * 2);

function incrementar34237() {
  base.value++;
}
</script>
