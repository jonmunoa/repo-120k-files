<template>
  <section class="panel-42629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42629");
const base = ref(42629);
const total = computed(() => base.value * 2);

function incrementar42629() {
  base.value++;
}
</script>
