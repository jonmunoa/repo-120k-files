<template>
  <section class="panel-27005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27005");
const base = ref(27005);
const total = computed(() => base.value * 2);

function incrementar27005() {
  base.value++;
}
</script>
