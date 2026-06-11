<template>
  <section class="panel-38837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38837");
const base = ref(38837);
const total = computed(() => base.value * 2);

function incrementar38837() {
  base.value++;
}
</script>
