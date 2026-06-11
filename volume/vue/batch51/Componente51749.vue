<template>
  <section class="panel-51749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51749");
const base = ref(51749);
const total = computed(() => base.value * 2);

function incrementar51749() {
  base.value++;
}
</script>
