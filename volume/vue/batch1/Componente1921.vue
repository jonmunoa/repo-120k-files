<template>
  <section class="panel-1921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1921");
const base = ref(1921);
const total = computed(() => base.value * 2);

function incrementar1921() {
  base.value++;
}
</script>
