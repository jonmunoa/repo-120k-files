<template>
  <section class="panel-45601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45601");
const base = ref(45601);
const total = computed(() => base.value * 2);

function incrementar45601() {
  base.value++;
}
</script>
