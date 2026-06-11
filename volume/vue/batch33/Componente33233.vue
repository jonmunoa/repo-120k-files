<template>
  <section class="panel-33233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33233");
const base = ref(33233);
const total = computed(() => base.value * 2);

function incrementar33233() {
  base.value++;
}
</script>
