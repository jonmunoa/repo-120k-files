<template>
  <section class="panel-2213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2213");
const base = ref(2213);
const total = computed(() => base.value * 2);

function incrementar2213() {
  base.value++;
}
</script>
