<template>
  <section class="panel-30405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30405");
const base = ref(30405);
const total = computed(() => base.value * 2);

function incrementar30405() {
  base.value++;
}
</script>
