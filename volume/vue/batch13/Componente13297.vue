<template>
  <section class="panel-13297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13297");
const base = ref(13297);
const total = computed(() => base.value * 2);

function incrementar13297() {
  base.value++;
}
</script>
