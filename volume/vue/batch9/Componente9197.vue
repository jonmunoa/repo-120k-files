<template>
  <section class="panel-9197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9197");
const base = ref(9197);
const total = computed(() => base.value * 2);

function incrementar9197() {
  base.value++;
}
</script>
