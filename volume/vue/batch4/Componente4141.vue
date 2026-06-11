<template>
  <section class="panel-4141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4141");
const base = ref(4141);
const total = computed(() => base.value * 2);

function incrementar4141() {
  base.value++;
}
</script>
