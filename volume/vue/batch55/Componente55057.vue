<template>
  <section class="panel-55057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55057");
const base = ref(55057);
const total = computed(() => base.value * 2);

function incrementar55057() {
  base.value++;
}
</script>
