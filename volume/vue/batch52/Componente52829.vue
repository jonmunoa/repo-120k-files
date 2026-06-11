<template>
  <section class="panel-52829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52829");
const base = ref(52829);
const total = computed(() => base.value * 2);

function incrementar52829() {
  base.value++;
}
</script>
