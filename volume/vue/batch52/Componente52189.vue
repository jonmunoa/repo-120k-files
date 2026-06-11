<template>
  <section class="panel-52189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52189");
const base = ref(52189);
const total = computed(() => base.value * 2);

function incrementar52189() {
  base.value++;
}
</script>
