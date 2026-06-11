<template>
  <section class="panel-21305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21305");
const base = ref(21305);
const total = computed(() => base.value * 2);

function incrementar21305() {
  base.value++;
}
</script>
