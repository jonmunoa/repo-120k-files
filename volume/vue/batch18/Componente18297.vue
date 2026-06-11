<template>
  <section class="panel-18297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18297");
const base = ref(18297);
const total = computed(() => base.value * 2);

function incrementar18297() {
  base.value++;
}
</script>
