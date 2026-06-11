<template>
  <section class="panel-22781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22781");
const base = ref(22781);
const total = computed(() => base.value * 2);

function incrementar22781() {
  base.value++;
}
</script>
