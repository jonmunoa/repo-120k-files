<template>
  <section class="panel-14781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14781");
const base = ref(14781);
const total = computed(() => base.value * 2);

function incrementar14781() {
  base.value++;
}
</script>
