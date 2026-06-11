<template>
  <section class="panel-3113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3113");
const base = ref(3113);
const total = computed(() => base.value * 2);

function incrementar3113() {
  base.value++;
}
</script>
