<template>
  <section class="panel-10141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10141");
const base = ref(10141);
const total = computed(() => base.value * 2);

function incrementar10141() {
  base.value++;
}
</script>
