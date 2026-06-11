<template>
  <section class="panel-22805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22805");
const base = ref(22805);
const total = computed(() => base.value * 2);

function incrementar22805() {
  base.value++;
}
</script>
