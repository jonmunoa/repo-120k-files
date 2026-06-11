<template>
  <section class="panel-17213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17213");
const base = ref(17213);
const total = computed(() => base.value * 2);

function incrementar17213() {
  base.value++;
}
</script>
