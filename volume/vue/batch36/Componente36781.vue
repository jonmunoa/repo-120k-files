<template>
  <section class="panel-36781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36781");
const base = ref(36781);
const total = computed(() => base.value * 2);

function incrementar36781() {
  base.value++;
}
</script>
