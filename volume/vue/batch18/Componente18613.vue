<template>
  <section class="panel-18613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18613");
const base = ref(18613);
const total = computed(() => base.value * 2);

function incrementar18613() {
  base.value++;
}
</script>
