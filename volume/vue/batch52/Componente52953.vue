<template>
  <section class="panel-52953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52953");
const base = ref(52953);
const total = computed(() => base.value * 2);

function incrementar52953() {
  base.value++;
}
</script>
