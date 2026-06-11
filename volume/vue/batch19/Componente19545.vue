<template>
  <section class="panel-19545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19545");
const base = ref(19545);
const total = computed(() => base.value * 2);

function incrementar19545() {
  base.value++;
}
</script>
