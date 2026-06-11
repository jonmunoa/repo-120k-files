<template>
  <section class="panel-30033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30033");
const base = ref(30033);
const total = computed(() => base.value * 2);

function incrementar30033() {
  base.value++;
}
</script>
