<template>
  <section class="panel-50305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50305");
const base = ref(50305);
const total = computed(() => base.value * 2);

function incrementar50305() {
  base.value++;
}
</script>
