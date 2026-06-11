<template>
  <section class="panel-39945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39945");
const base = ref(39945);
const total = computed(() => base.value * 2);

function incrementar39945() {
  base.value++;
}
</script>
