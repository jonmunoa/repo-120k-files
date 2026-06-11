<template>
  <section class="panel-29073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29073");
const base = ref(29073);
const total = computed(() => base.value * 2);

function incrementar29073() {
  base.value++;
}
</script>
