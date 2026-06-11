<template>
  <section class="panel-57189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57189");
const base = ref(57189);
const total = computed(() => base.value * 2);

function incrementar57189() {
  base.value++;
}
</script>
