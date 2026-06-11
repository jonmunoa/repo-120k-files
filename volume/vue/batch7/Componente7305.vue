<template>
  <section class="panel-7305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7305");
const base = ref(7305);
const total = computed(() => base.value * 2);

function incrementar7305() {
  base.value++;
}
</script>
