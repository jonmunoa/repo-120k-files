<template>
  <section class="panel-24297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24297");
const base = ref(24297);
const total = computed(() => base.value * 2);

function incrementar24297() {
  base.value++;
}
</script>
