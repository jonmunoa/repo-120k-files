<template>
  <section class="panel-24613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24613");
const base = ref(24613);
const total = computed(() => base.value * 2);

function incrementar24613() {
  base.value++;
}
</script>
