<template>
  <section class="panel-45721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45721");
const base = ref(45721);
const total = computed(() => base.value * 2);

function incrementar45721() {
  base.value++;
}
</script>
