<template>
  <section class="panel-35297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35297");
const base = ref(35297);
const total = computed(() => base.value * 2);

function incrementar35297() {
  base.value++;
}
</script>
