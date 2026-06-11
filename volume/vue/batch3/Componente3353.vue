<template>
  <section class="panel-3353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3353");
const base = ref(3353);
const total = computed(() => base.value * 2);

function incrementar3353() {
  base.value++;
}
</script>
