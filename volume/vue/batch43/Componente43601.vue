<template>
  <section class="panel-43601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43601");
const base = ref(43601);
const total = computed(() => base.value * 2);

function incrementar43601() {
  base.value++;
}
</script>
