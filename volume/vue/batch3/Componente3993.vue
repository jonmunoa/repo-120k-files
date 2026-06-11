<template>
  <section class="panel-3993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3993");
const base = ref(3993);
const total = computed(() => base.value * 2);

function incrementar3993() {
  base.value++;
}
</script>
