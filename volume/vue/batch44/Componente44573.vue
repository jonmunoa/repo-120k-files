<template>
  <section class="panel-44573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44573");
const base = ref(44573);
const total = computed(() => base.value * 2);

function incrementar44573() {
  base.value++;
}
</script>
