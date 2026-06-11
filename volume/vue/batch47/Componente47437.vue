<template>
  <section class="panel-47437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47437");
const base = ref(47437);
const total = computed(() => base.value * 2);

function incrementar47437() {
  base.value++;
}
</script>
