<template>
  <section class="panel-38593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38593");
const base = ref(38593);
const total = computed(() => base.value * 2);

function incrementar38593() {
  base.value++;
}
</script>
