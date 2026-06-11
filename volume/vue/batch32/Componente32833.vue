<template>
  <section class="panel-32833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32833");
const base = ref(32833);
const total = computed(() => base.value * 2);

function incrementar32833() {
  base.value++;
}
</script>
