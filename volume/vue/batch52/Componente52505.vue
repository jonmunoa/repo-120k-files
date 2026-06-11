<template>
  <section class="panel-52505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52505");
const base = ref(52505);
const total = computed(() => base.value * 2);

function incrementar52505() {
  base.value++;
}
</script>
