<template>
  <section class="panel-29769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29769");
const base = ref(29769);
const total = computed(() => base.value * 2);

function incrementar29769() {
  base.value++;
}
</script>
