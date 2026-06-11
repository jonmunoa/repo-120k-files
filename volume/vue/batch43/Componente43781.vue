<template>
  <section class="panel-43781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43781");
const base = ref(43781);
const total = computed(() => base.value * 2);

function incrementar43781() {
  base.value++;
}
</script>
