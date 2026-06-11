<template>
  <section class="panel-18461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18461");
const base = ref(18461);
const total = computed(() => base.value * 2);

function incrementar18461() {
  base.value++;
}
</script>
