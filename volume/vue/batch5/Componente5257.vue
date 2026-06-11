<template>
  <section class="panel-5257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5257");
const base = ref(5257);
const total = computed(() => base.value * 2);

function incrementar5257() {
  base.value++;
}
</script>
