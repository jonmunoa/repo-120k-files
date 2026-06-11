<template>
  <section class="panel-30205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30205");
const base = ref(30205);
const total = computed(() => base.value * 2);

function incrementar30205() {
  base.value++;
}
</script>
