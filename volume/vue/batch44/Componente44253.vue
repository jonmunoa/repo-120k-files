<template>
  <section class="panel-44253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44253");
const base = ref(44253);
const total = computed(() => base.value * 2);

function incrementar44253() {
  base.value++;
}
</script>
