<template>
  <section class="panel-51321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51321");
const base = ref(51321);
const total = computed(() => base.value * 2);

function incrementar51321() {
  base.value++;
}
</script>
