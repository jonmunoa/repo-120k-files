<template>
  <section class="panel-18725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18725");
const base = ref(18725);
const total = computed(() => base.value * 2);

function incrementar18725() {
  base.value++;
}
</script>
