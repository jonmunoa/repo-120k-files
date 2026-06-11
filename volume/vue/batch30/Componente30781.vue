<template>
  <section class="panel-30781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30781");
const base = ref(30781);
const total = computed(() => base.value * 2);

function incrementar30781() {
  base.value++;
}
</script>
