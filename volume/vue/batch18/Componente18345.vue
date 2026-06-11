<template>
  <section class="panel-18345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18345");
const base = ref(18345);
const total = computed(() => base.value * 2);

function incrementar18345() {
  base.value++;
}
</script>
