<template>
  <section class="panel-15781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15781");
const base = ref(15781);
const total = computed(() => base.value * 2);

function incrementar15781() {
  base.value++;
}
</script>
