<template>
  <section class="panel-52033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52033");
const base = ref(52033);
const total = computed(() => base.value * 2);

function incrementar52033() {
  base.value++;
}
</script>
