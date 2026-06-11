<template>
  <section class="panel-9833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9833");
const base = ref(9833);
const total = computed(() => base.value * 2);

function incrementar9833() {
  base.value++;
}
</script>
