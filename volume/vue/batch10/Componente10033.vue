<template>
  <section class="panel-10033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10033");
const base = ref(10033);
const total = computed(() => base.value * 2);

function incrementar10033() {
  base.value++;
}
</script>
