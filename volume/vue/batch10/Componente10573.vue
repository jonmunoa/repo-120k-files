<template>
  <section class="panel-10573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10573");
const base = ref(10573);
const total = computed(() => base.value * 2);

function incrementar10573() {
  base.value++;
}
</script>
