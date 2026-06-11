<template>
  <section class="panel-54601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54601");
const base = ref(54601);
const total = computed(() => base.value * 2);

function incrementar54601() {
  base.value++;
}
</script>
