<template>
  <section class="panel-44021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44021");
const base = ref(44021);
const total = computed(() => base.value * 2);

function incrementar44021() {
  base.value++;
}
</script>
