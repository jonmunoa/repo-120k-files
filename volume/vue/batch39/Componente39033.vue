<template>
  <section class="panel-39033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39033");
const base = ref(39033);
const total = computed(() => base.value * 2);

function incrementar39033() {
  base.value++;
}
</script>
