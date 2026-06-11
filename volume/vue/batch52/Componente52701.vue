<template>
  <section class="panel-52701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52701");
const base = ref(52701);
const total = computed(() => base.value * 2);

function incrementar52701() {
  base.value++;
}
</script>
