<template>
  <section class="panel-9461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9461");
const base = ref(9461);
const total = computed(() => base.value * 2);

function incrementar9461() {
  base.value++;
}
</script>
