<template>
  <section class="panel-39809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39809");
const base = ref(39809);
const total = computed(() => base.value * 2);

function incrementar39809() {
  base.value++;
}
</script>
