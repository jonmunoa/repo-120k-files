<template>
  <section class="panel-24405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24405");
const base = ref(24405);
const total = computed(() => base.value * 2);

function incrementar24405() {
  base.value++;
}
</script>
