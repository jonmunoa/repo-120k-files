<template>
  <section class="panel-39749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39749");
const base = ref(39749);
const total = computed(() => base.value * 2);

function incrementar39749() {
  base.value++;
}
</script>
