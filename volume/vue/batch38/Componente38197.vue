<template>
  <section class="panel-38197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38197");
const base = ref(38197);
const total = computed(() => base.value * 2);

function incrementar38197() {
  base.value++;
}
</script>
