<template>
  <section class="panel-19601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19601");
const base = ref(19601);
const total = computed(() => base.value * 2);

function incrementar19601() {
  base.value++;
}
</script>
