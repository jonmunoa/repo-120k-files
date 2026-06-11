<template>
  <section class="panel-31585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31585");
const base = ref(31585);
const total = computed(() => base.value * 2);

function incrementar31585() {
  base.value++;
}
</script>
