<template>
  <section class="panel-33781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33781");
const base = ref(33781);
const total = computed(() => base.value * 2);

function incrementar33781() {
  base.value++;
}
</script>
