<template>
  <section class="panel-5769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5769");
const base = ref(5769);
const total = computed(() => base.value * 2);

function incrementar5769() {
  base.value++;
}
</script>
