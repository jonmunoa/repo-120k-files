<template>
  <section class="panel-2309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2309");
const base = ref(2309);
const total = computed(() => base.value * 2);

function incrementar2309() {
  base.value++;
}
</script>
