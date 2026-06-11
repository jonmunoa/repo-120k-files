<template>
  <section class="panel-32765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32765");
const base = ref(32765);
const total = computed(() => base.value * 2);

function incrementar32765() {
  base.value++;
}
</script>
