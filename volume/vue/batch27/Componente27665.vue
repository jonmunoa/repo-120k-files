<template>
  <section class="panel-27665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27665");
const base = ref(27665);
const total = computed(() => base.value * 2);

function incrementar27665() {
  base.value++;
}
</script>
