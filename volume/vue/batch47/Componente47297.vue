<template>
  <section class="panel-47297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47297");
const base = ref(47297);
const total = computed(() => base.value * 2);

function incrementar47297() {
  base.value++;
}
</script>
