<template>
  <section class="panel-32297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32297");
const base = ref(32297);
const total = computed(() => base.value * 2);

function incrementar32297() {
  base.value++;
}
</script>
