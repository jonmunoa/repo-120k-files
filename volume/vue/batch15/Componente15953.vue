<template>
  <section class="panel-15953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15953");
const base = ref(15953);
const total = computed(() => base.value * 2);

function incrementar15953() {
  base.value++;
}
</script>
