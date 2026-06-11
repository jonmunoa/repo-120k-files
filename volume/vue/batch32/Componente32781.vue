<template>
  <section class="panel-32781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32781");
const base = ref(32781);
const total = computed(() => base.value * 2);

function incrementar32781() {
  base.value++;
}
</script>
