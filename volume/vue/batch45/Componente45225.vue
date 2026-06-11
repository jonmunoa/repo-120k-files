<template>
  <section class="panel-45225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45225");
const base = ref(45225);
const total = computed(() => base.value * 2);

function incrementar45225() {
  base.value++;
}
</script>
