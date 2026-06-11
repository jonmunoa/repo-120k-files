<template>
  <section class="panel-44437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44437");
const base = ref(44437);
const total = computed(() => base.value * 2);

function incrementar44437() {
  base.value++;
}
</script>
