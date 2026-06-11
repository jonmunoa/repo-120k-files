<template>
  <section class="panel-45461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45461");
const base = ref(45461);
const total = computed(() => base.value * 2);

function incrementar45461() {
  base.value++;
}
</script>
