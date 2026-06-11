<template>
  <section class="panel-16781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16781");
const base = ref(16781);
const total = computed(() => base.value * 2);

function incrementar16781() {
  base.value++;
}
</script>
