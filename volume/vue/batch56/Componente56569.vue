<template>
  <section class="panel-56569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56569");
const base = ref(56569);
const total = computed(() => base.value * 2);

function incrementar56569() {
  base.value++;
}
</script>
