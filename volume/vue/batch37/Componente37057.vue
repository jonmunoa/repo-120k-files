<template>
  <section class="panel-37057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37057");
const base = ref(37057);
const total = computed(() => base.value * 2);

function incrementar37057() {
  base.value++;
}
</script>
