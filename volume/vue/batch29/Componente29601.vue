<template>
  <section class="panel-29601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29601");
const base = ref(29601);
const total = computed(() => base.value * 2);

function incrementar29601() {
  base.value++;
}
</script>
