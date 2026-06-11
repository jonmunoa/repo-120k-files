<template>
  <section class="panel-37033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37033");
const base = ref(37033);
const total = computed(() => base.value * 2);

function incrementar37033() {
  base.value++;
}
</script>
