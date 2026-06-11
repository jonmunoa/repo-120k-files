<template>
  <section class="panel-37129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37129");
const base = ref(37129);
const total = computed(() => base.value * 2);

function incrementar37129() {
  base.value++;
}
</script>
