<template>
  <section class="panel-48601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48601");
const base = ref(48601);
const total = computed(() => base.value * 2);

function incrementar48601() {
  base.value++;
}
</script>
