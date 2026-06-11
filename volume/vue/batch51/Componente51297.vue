<template>
  <section class="panel-51297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51297");
const base = ref(51297);
const total = computed(() => base.value * 2);

function incrementar51297() {
  base.value++;
}
</script>
