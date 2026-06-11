<template>
  <section class="panel-31781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31781");
const base = ref(31781);
const total = computed(() => base.value * 2);

function incrementar31781() {
  base.value++;
}
</script>
