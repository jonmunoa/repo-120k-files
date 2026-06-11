<template>
  <section class="panel-51213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51213");
const base = ref(51213);
const total = computed(() => base.value * 2);

function incrementar51213() {
  base.value++;
}
</script>
