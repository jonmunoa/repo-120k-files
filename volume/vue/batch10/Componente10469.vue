<template>
  <section class="panel-10469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10469");
const base = ref(10469);
const total = computed(() => base.value * 2);

function incrementar10469() {
  base.value++;
}
</script>
