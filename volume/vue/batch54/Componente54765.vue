<template>
  <section class="panel-54765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54765");
const base = ref(54765);
const total = computed(() => base.value * 2);

function incrementar54765() {
  base.value++;
}
</script>
