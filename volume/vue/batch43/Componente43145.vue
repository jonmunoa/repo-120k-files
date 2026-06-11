<template>
  <section class="panel-43145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43145");
const base = ref(43145);
const total = computed(() => base.value * 2);

function incrementar43145() {
  base.value++;
}
</script>
