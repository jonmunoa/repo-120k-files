<template>
  <section class="panel-52233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52233");
const base = ref(52233);
const total = computed(() => base.value * 2);

function incrementar52233() {
  base.value++;
}
</script>
