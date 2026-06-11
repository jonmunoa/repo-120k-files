<template>
  <section class="panel-51073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51073");
const base = ref(51073);
const total = computed(() => base.value * 2);

function incrementar51073() {
  base.value++;
}
</script>
