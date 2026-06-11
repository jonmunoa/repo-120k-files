<template>
  <section class="panel-53781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53781");
const base = ref(53781);
const total = computed(() => base.value * 2);

function incrementar53781() {
  base.value++;
}
</script>
