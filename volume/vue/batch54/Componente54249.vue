<template>
  <section class="panel-54249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54249");
const base = ref(54249);
const total = computed(() => base.value * 2);

function incrementar54249() {
  base.value++;
}
</script>
