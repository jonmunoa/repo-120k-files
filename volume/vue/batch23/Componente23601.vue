<template>
  <section class="panel-23601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23601");
const base = ref(23601);
const total = computed(() => base.value * 2);

function incrementar23601() {
  base.value++;
}
</script>
