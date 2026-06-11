<template>
  <section class="panel-30057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30057");
const base = ref(30057);
const total = computed(() => base.value * 2);

function incrementar30057() {
  base.value++;
}
</script>
