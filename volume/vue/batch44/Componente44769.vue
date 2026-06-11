<template>
  <section class="panel-44769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44769");
const base = ref(44769);
const total = computed(() => base.value * 2);

function incrementar44769() {
  base.value++;
}
</script>
