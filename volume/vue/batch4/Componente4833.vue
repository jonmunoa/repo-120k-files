<template>
  <section class="panel-4833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4833");
const base = ref(4833);
const total = computed(() => base.value * 2);

function incrementar4833() {
  base.value++;
}
</script>
