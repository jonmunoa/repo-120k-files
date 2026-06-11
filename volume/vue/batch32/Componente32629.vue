<template>
  <section class="panel-32629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32629");
const base = ref(32629);
const total = computed(() => base.value * 2);

function incrementar32629() {
  base.value++;
}
</script>
