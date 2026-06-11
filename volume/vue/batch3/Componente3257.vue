<template>
  <section class="panel-3257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3257");
const base = ref(3257);
const total = computed(() => base.value * 2);

function incrementar3257() {
  base.value++;
}
</script>
