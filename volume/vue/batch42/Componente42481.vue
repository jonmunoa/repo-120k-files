<template>
  <section class="panel-42481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42481");
const base = ref(42481);
const total = computed(() => base.value * 2);

function incrementar42481() {
  base.value++;
}
</script>
