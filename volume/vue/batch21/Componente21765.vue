<template>
  <section class="panel-21765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21765");
const base = ref(21765);
const total = computed(() => base.value * 2);

function incrementar21765() {
  base.value++;
}
</script>
