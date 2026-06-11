<template>
  <section class="panel-19225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19225");
const base = ref(19225);
const total = computed(() => base.value * 2);

function incrementar19225() {
  base.value++;
}
</script>
