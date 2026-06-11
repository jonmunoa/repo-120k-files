<template>
  <section class="panel-35069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35069");
const base = ref(35069);
const total = computed(() => base.value * 2);

function incrementar35069() {
  base.value++;
}
</script>
