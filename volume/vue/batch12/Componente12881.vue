<template>
  <section class="panel-12881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12881");
const base = ref(12881);
const total = computed(() => base.value * 2);

function incrementar12881() {
  base.value++;
}
</script>
