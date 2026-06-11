<template>
  <section class="panel-30141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30141");
const base = ref(30141);
const total = computed(() => base.value * 2);

function incrementar30141() {
  base.value++;
}
</script>
