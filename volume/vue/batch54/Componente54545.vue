<template>
  <section class="panel-54545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54545");
const base = ref(54545);
const total = computed(() => base.value * 2);

function incrementar54545() {
  base.value++;
}
</script>
