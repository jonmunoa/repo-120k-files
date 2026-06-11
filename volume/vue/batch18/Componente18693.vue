<template>
  <section class="panel-18693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18693");
const base = ref(18693);
const total = computed(() => base.value * 2);

function incrementar18693() {
  base.value++;
}
</script>
