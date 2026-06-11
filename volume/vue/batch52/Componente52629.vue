<template>
  <section class="panel-52629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52629");
const base = ref(52629);
const total = computed(() => base.value * 2);

function incrementar52629() {
  base.value++;
}
</script>
