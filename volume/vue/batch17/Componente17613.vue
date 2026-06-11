<template>
  <section class="panel-17613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17613");
const base = ref(17613);
const total = computed(() => base.value * 2);

function incrementar17613() {
  base.value++;
}
</script>
