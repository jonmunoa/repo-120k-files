<template>
  <section class="panel-5529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5529");
const base = ref(5529);
const total = computed(() => base.value * 2);

function incrementar5529() {
  base.value++;
}
</script>
