<template>
  <section class="panel-10397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10397");
const base = ref(10397);
const total = computed(() => base.value * 2);

function incrementar10397() {
  base.value++;
}
</script>
