<template>
  <section class="panel-48073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48073");
const base = ref(48073);
const total = computed(() => base.value * 2);

function incrementar48073() {
  base.value++;
}
</script>
