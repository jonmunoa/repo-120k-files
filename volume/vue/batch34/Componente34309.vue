<template>
  <section class="panel-34309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34309");
const base = ref(34309);
const total = computed(() => base.value * 2);

function incrementar34309() {
  base.value++;
}
</script>
