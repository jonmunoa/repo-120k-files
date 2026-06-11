<template>
  <section class="panel-28781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28781");
const base = ref(28781);
const total = computed(() => base.value * 2);

function incrementar28781() {
  base.value++;
}
</script>
