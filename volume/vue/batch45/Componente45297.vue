<template>
  <section class="panel-45297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45297");
const base = ref(45297);
const total = computed(() => base.value * 2);

function incrementar45297() {
  base.value++;
}
</script>
