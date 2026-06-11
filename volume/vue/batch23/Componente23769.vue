<template>
  <section class="panel-23769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23769");
const base = ref(23769);
const total = computed(() => base.value * 2);

function incrementar23769() {
  base.value++;
}
</script>
