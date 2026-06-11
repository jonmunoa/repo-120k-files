<template>
  <section class="panel-29765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29765");
const base = ref(29765);
const total = computed(() => base.value * 2);

function incrementar29765() {
  base.value++;
}
</script>
