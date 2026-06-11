<template>
  <section class="panel-1569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1569");
const base = ref(1569);
const total = computed(() => base.value * 2);

function incrementar1569() {
  base.value++;
}
</script>
