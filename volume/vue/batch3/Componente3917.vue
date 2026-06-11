<template>
  <section class="panel-3917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3917");
const base = ref(3917);
const total = computed(() => base.value * 2);

function incrementar3917() {
  base.value++;
}
</script>
