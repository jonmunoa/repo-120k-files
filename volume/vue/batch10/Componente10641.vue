<template>
  <section class="panel-10641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10641");
const base = ref(10641);
const total = computed(() => base.value * 2);

function incrementar10641() {
  base.value++;
}
</script>
