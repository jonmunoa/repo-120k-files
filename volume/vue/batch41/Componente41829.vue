<template>
  <section class="panel-41829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41829");
const base = ref(41829);
const total = computed(() => base.value * 2);

function incrementar41829() {
  base.value++;
}
</script>
