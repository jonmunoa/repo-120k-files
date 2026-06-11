<template>
  <section class="panel-54229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54229");
const base = ref(54229);
const total = computed(() => base.value * 2);

function incrementar54229() {
  base.value++;
}
</script>
