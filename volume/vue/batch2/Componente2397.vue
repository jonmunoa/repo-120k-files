<template>
  <section class="panel-2397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2397");
const base = ref(2397);
const total = computed(() => base.value * 2);

function incrementar2397() {
  base.value++;
}
</script>
