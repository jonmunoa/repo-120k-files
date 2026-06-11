<template>
  <section class="panel-52765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52765");
const base = ref(52765);
const total = computed(() => base.value * 2);

function incrementar52765() {
  base.value++;
}
</script>
