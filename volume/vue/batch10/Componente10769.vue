<template>
  <section class="panel-10769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10769");
const base = ref(10769);
const total = computed(() => base.value * 2);

function incrementar10769() {
  base.value++;
}
</script>
