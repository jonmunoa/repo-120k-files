<template>
  <section class="panel-54213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54213");
const base = ref(54213);
const total = computed(() => base.value * 2);

function incrementar54213() {
  base.value++;
}
</script>
