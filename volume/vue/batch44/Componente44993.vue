<template>
  <section class="panel-44993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44993");
const base = ref(44993);
const total = computed(() => base.value * 2);

function incrementar44993() {
  base.value++;
}
</script>
