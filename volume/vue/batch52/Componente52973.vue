<template>
  <section class="panel-52973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52973");
const base = ref(52973);
const total = computed(() => base.value * 2);

function incrementar52973() {
  base.value++;
}
</script>
