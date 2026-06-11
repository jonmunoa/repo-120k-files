<template>
  <section class="panel-51309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51309");
const base = ref(51309);
const total = computed(() => base.value * 2);

function incrementar51309() {
  base.value++;
}
</script>
