<template>
  <section class="panel-32213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32213");
const base = ref(32213);
const total = computed(() => base.value * 2);

function incrementar32213() {
  base.value++;
}
</script>
