<template>
  <section class="panel-42829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42829");
const base = ref(42829);
const total = computed(() => base.value * 2);

function incrementar42829() {
  base.value++;
}
</script>
