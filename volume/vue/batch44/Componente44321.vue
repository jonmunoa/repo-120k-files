<template>
  <section class="panel-44321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44321");
const base = ref(44321);
const total = computed(() => base.value * 2);

function incrementar44321() {
  base.value++;
}
</script>
