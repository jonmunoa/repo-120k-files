<template>
  <section class="panel-17437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17437");
const base = ref(17437);
const total = computed(() => base.value * 2);

function incrementar17437() {
  base.value++;
}
</script>
