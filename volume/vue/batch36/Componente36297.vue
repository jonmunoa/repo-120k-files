<template>
  <section class="panel-36297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36297");
const base = ref(36297);
const total = computed(() => base.value * 2);

function incrementar36297() {
  base.value++;
}
</script>
