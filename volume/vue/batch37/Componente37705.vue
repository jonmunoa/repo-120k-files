<template>
  <section class="panel-37705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37705");
const base = ref(37705);
const total = computed(() => base.value * 2);

function incrementar37705() {
  base.value++;
}
</script>
