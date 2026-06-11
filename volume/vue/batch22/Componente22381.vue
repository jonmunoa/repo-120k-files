<template>
  <section class="panel-22381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22381");
const base = ref(22381);
const total = computed(() => base.value * 2);

function incrementar22381() {
  base.value++;
}
</script>
