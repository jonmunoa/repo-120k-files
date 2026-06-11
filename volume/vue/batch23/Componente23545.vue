<template>
  <section class="panel-23545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23545");
const base = ref(23545);
const total = computed(() => base.value * 2);

function incrementar23545() {
  base.value++;
}
</script>
