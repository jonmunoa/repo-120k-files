<template>
  <section class="panel-31309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31309");
const base = ref(31309);
const total = computed(() => base.value * 2);

function incrementar31309() {
  base.value++;
}
</script>
