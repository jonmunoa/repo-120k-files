<template>
  <section class="panel-57069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57069");
const base = ref(57069);
const total = computed(() => base.value * 2);

function incrementar57069() {
  base.value++;
}
</script>
