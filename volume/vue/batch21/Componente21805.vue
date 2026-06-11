<template>
  <section class="panel-21805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21805");
const base = ref(21805);
const total = computed(() => base.value * 2);

function incrementar21805() {
  base.value++;
}
</script>
