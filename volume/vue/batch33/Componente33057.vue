<template>
  <section class="panel-33057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33057");
const base = ref(33057);
const total = computed(() => base.value * 2);

function incrementar33057() {
  base.value++;
}
</script>
