<template>
  <section class="panel-4629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4629");
const base = ref(4629);
const total = computed(() => base.value * 2);

function incrementar4629() {
  base.value++;
}
</script>
