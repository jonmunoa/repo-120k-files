<template>
  <section class="panel-12465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12465");
const base = ref(12465);
const total = computed(() => base.value * 2);

function incrementar12465() {
  base.value++;
}
</script>
