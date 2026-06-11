<template>
  <section class="panel-23397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23397");
const base = ref(23397);
const total = computed(() => base.value * 2);

function incrementar23397() {
  base.value++;
}
</script>
