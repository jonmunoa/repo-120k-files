<template>
  <section class="panel-52381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52381");
const base = ref(52381);
const total = computed(() => base.value * 2);

function incrementar52381() {
  base.value++;
}
</script>
