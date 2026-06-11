<template>
  <section class="panel-44397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44397");
const base = ref(44397);
const total = computed(() => base.value * 2);

function incrementar44397() {
  base.value++;
}
</script>
