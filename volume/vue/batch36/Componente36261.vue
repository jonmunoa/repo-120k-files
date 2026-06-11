<template>
  <section class="panel-36261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36261");
const base = ref(36261);
const total = computed(() => base.value * 2);

function incrementar36261() {
  base.value++;
}
</script>
