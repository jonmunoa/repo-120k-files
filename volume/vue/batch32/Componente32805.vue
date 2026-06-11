<template>
  <section class="panel-32805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32805");
const base = ref(32805);
const total = computed(() => base.value * 2);

function incrementar32805() {
  base.value++;
}
</script>
