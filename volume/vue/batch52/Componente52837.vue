<template>
  <section class="panel-52837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52837");
const base = ref(52837);
const total = computed(() => base.value * 2);

function incrementar52837() {
  base.value++;
}
</script>
