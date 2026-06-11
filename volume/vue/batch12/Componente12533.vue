<template>
  <section class="panel-12533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12533");
const base = ref(12533);
const total = computed(() => base.value * 2);

function incrementar12533() {
  base.value++;
}
</script>
