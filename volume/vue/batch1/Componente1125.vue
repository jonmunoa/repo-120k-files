<template>
  <section class="panel-1125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1125");
const base = ref(1125);
const total = computed(() => base.value * 2);

function incrementar1125() {
  base.value++;
}
</script>
