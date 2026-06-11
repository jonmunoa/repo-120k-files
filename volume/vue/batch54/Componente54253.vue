<template>
  <section class="panel-54253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54253");
const base = ref(54253);
const total = computed(() => base.value * 2);

function incrementar54253() {
  base.value++;
}
</script>
