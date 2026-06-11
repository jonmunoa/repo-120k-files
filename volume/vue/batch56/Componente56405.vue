<template>
  <section class="panel-56405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56405");
const base = ref(56405);
const total = computed(() => base.value * 2);

function incrementar56405() {
  base.value++;
}
</script>
