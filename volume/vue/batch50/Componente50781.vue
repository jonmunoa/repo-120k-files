<template>
  <section class="panel-50781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50781");
const base = ref(50781);
const total = computed(() => base.value * 2);

function incrementar50781() {
  base.value++;
}
</script>
