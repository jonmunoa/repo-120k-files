<template>
  <section class="panel-25585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25585");
const base = ref(25585);
const total = computed(() => base.value * 2);

function incrementar25585() {
  base.value++;
}
</script>
