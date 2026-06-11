<template>
  <section class="panel-39765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39765");
const base = ref(39765);
const total = computed(() => base.value * 2);

function incrementar39765() {
  base.value++;
}
</script>
