<template>
  <section class="panel-41141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41141");
const base = ref(41141);
const total = computed(() => base.value * 2);

function incrementar41141() {
  base.value++;
}
</script>
