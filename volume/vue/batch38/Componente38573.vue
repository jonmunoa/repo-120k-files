<template>
  <section class="panel-38573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38573");
const base = ref(38573);
const total = computed(() => base.value * 2);

function incrementar38573() {
  base.value++;
}
</script>
