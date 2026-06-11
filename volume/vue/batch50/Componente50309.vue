<template>
  <section class="panel-50309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50309");
const base = ref(50309);
const total = computed(() => base.value * 2);

function incrementar50309() {
  base.value++;
}
</script>
