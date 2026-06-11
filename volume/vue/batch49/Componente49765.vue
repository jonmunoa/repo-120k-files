<template>
  <section class="panel-49765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49765");
const base = ref(49765);
const total = computed(() => base.value * 2);

function incrementar49765() {
  base.value++;
}
</script>
