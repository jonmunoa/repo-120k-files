<template>
  <section class="panel-17781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17781");
const base = ref(17781);
const total = computed(() => base.value * 2);

function incrementar17781() {
  base.value++;
}
</script>
