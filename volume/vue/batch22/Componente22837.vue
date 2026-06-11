<template>
  <section class="panel-22837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22837");
const base = ref(22837);
const total = computed(() => base.value * 2);

function incrementar22837() {
  base.value++;
}
</script>
