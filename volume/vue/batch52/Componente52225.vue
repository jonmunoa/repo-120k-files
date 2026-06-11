<template>
  <section class="panel-52225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52225");
const base = ref(52225);
const total = computed(() => base.value * 2);

function incrementar52225() {
  base.value++;
}
</script>
