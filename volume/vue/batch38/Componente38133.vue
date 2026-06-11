<template>
  <section class="panel-38133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38133");
const base = ref(38133);
const total = computed(() => base.value * 2);

function incrementar38133() {
  base.value++;
}
</script>
