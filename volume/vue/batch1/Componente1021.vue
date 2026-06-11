<template>
  <section class="panel-1021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1021");
const base = ref(1021);
const total = computed(() => base.value * 2);

function incrementar1021() {
  base.value++;
}
</script>
