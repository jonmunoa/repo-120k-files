<template>
  <section class="panel-22297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22297");
const base = ref(22297);
const total = computed(() => base.value * 2);

function incrementar22297() {
  base.value++;
}
</script>
