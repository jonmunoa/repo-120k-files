<template>
  <section class="panel-57309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57309");
const base = ref(57309);
const total = computed(() => base.value * 2);

function incrementar57309() {
  base.value++;
}
</script>
