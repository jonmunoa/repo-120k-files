<template>
  <section class="panel-2805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2805");
const base = ref(2805);
const total = computed(() => base.value * 2);

function incrementar2805() {
  base.value++;
}
</script>
