<template>
  <section class="panel-4481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4481");
const base = ref(4481);
const total = computed(() => base.value * 2);

function incrementar4481() {
  base.value++;
}
</script>
