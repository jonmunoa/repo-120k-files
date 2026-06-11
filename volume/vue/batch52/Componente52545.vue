<template>
  <section class="panel-52545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52545");
const base = ref(52545);
const total = computed(() => base.value * 2);

function incrementar52545() {
  base.value++;
}
</script>
