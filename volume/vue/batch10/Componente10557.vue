<template>
  <section class="panel-10557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10557");
const base = ref(10557);
const total = computed(() => base.value * 2);

function incrementar10557() {
  base.value++;
}
</script>
