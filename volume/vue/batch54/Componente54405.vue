<template>
  <section class="panel-54405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54405");
const base = ref(54405);
const total = computed(() => base.value * 2);

function incrementar54405() {
  base.value++;
}
</script>
