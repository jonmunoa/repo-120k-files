<template>
  <section class="panel-57057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57057");
const base = ref(57057);
const total = computed(() => base.value * 2);

function incrementar57057() {
  base.value++;
}
</script>
