<template>
  <section class="panel-16501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16501");
const base = ref(16501);
const total = computed(() => base.value * 2);

function incrementar16501() {
  base.value++;
}
</script>
