<template>
  <section class="panel-54233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54233");
const base = ref(54233);
const total = computed(() => base.value * 2);

function incrementar54233() {
  base.value++;
}
</script>
