<template>
  <section class="panel-41629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41629");
const base = ref(41629);
const total = computed(() => base.value * 2);

function incrementar41629() {
  base.value++;
}
</script>
