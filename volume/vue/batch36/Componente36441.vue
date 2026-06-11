<template>
  <section class="panel-36441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36441");
const base = ref(36441);
const total = computed(() => base.value * 2);

function incrementar36441() {
  base.value++;
}
</script>
