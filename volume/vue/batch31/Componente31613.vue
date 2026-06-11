<template>
  <section class="panel-31613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31613");
const base = ref(31613);
const total = computed(() => base.value * 2);

function incrementar31613() {
  base.value++;
}
</script>
