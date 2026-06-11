<template>
  <section class="panel-37297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37297");
const base = ref(37297);
const total = computed(() => base.value * 2);

function incrementar37297() {
  base.value++;
}
</script>
