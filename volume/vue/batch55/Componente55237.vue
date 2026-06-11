<template>
  <section class="panel-55237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55237");
const base = ref(55237);
const total = computed(() => base.value * 2);

function incrementar55237() {
  base.value++;
}
</script>
