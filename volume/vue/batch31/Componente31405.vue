<template>
  <section class="panel-31405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31405");
const base = ref(31405);
const total = computed(() => base.value * 2);

function incrementar31405() {
  base.value++;
}
</script>
