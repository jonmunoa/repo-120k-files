<template>
  <section class="panel-50769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50769");
const base = ref(50769);
const total = computed(() => base.value * 2);

function incrementar50769() {
  base.value++;
}
</script>
