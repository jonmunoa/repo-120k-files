<template>
  <section class="panel-41781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41781");
const base = ref(41781);
const total = computed(() => base.value * 2);

function incrementar41781() {
  base.value++;
}
</script>
