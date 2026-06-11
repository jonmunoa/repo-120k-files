<template>
  <section class="panel-44141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44141");
const base = ref(44141);
const total = computed(() => base.value * 2);

function incrementar44141() {
  base.value++;
}
</script>
