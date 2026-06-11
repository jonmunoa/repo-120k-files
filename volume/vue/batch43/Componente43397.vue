<template>
  <section class="panel-43397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43397");
const base = ref(43397);
const total = computed(() => base.value * 2);

function incrementar43397() {
  base.value++;
}
</script>
