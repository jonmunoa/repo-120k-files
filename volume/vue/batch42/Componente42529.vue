<template>
  <section class="panel-42529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42529");
const base = ref(42529);
const total = computed(() => base.value * 2);

function incrementar42529() {
  base.value++;
}
</script>
