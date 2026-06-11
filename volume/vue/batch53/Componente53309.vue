<template>
  <section class="panel-53309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53309");
const base = ref(53309);
const total = computed(() => base.value * 2);

function incrementar53309() {
  base.value++;
}
</script>
