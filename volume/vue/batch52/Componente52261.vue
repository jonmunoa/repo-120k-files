<template>
  <section class="panel-52261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52261");
const base = ref(52261);
const total = computed(() => base.value * 2);

function incrementar52261() {
  base.value++;
}
</script>
