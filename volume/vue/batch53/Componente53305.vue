<template>
  <section class="panel-53305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53305");
const base = ref(53305);
const total = computed(() => base.value * 2);

function incrementar53305() {
  base.value++;
}
</script>
