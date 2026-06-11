<template>
  <section class="panel-38033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38033");
const base = ref(38033);
const total = computed(() => base.value * 2);

function incrementar38033() {
  base.value++;
}
</script>
