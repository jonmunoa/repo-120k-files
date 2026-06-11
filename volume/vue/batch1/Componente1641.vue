<template>
  <section class="panel-1641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1641");
const base = ref(1641);
const total = computed(() => base.value * 2);

function incrementar1641() {
  base.value++;
}
</script>
