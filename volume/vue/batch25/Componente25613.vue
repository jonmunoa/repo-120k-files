<template>
  <section class="panel-25613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25613");
const base = ref(25613);
const total = computed(() => base.value * 2);

function incrementar25613() {
  base.value++;
}
</script>
