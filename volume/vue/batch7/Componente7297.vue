<template>
  <section class="panel-7297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7297");
const base = ref(7297);
const total = computed(() => base.value * 2);

function incrementar7297() {
  base.value++;
}
</script>
