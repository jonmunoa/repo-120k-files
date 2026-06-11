<template>
  <section class="panel-40309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40309");
const base = ref(40309);
const total = computed(() => base.value * 2);

function incrementar40309() {
  base.value++;
}
</script>
