<template>
  <section class="panel-5781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5781");
const base = ref(5781);
const total = computed(() => base.value * 2);

function incrementar5781() {
  base.value++;
}
</script>
