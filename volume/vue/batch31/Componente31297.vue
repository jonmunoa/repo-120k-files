<template>
  <section class="panel-31297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31297");
const base = ref(31297);
const total = computed(() => base.value * 2);

function incrementar31297() {
  base.value++;
}
</script>
