<template>
  <section class="panel-39397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39397");
const base = ref(39397);
const total = computed(() => base.value * 2);

function incrementar39397() {
  base.value++;
}
</script>
