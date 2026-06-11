<template>
  <section class="panel-3693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3693");
const base = ref(3693);
const total = computed(() => base.value * 2);

function incrementar3693() {
  base.value++;
}
</script>
