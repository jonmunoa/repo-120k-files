<template>
  <section class="panel-57909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57909");
const base = ref(57909);
const total = computed(() => base.value * 2);

function incrementar57909() {
  base.value++;
}
</script>
