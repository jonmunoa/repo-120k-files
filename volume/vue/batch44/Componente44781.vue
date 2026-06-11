<template>
  <section class="panel-44781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44781");
const base = ref(44781);
const total = computed(() => base.value * 2);

function incrementar44781() {
  base.value++;
}
</script>
