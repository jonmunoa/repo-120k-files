<template>
  <section class="panel-10629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10629");
const base = ref(10629);
const total = computed(() => base.value * 2);

function incrementar10629() {
  base.value++;
}
</script>
