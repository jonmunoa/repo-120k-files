<template>
  <section class="panel-24141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24141");
const base = ref(24141);
const total = computed(() => base.value * 2);

function incrementar24141() {
  base.value++;
}
</script>
