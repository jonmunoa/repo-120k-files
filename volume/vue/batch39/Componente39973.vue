<template>
  <section class="panel-39973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39973");
const base = ref(39973);
const total = computed(() => base.value * 2);

function incrementar39973() {
  base.value++;
}
</script>
