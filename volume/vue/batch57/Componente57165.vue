<template>
  <section class="panel-57165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57165");
const base = ref(57165);
const total = computed(() => base.value * 2);

function incrementar57165() {
  base.value++;
}
</script>
