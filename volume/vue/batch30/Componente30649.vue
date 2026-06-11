<template>
  <section class="panel-30649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30649");
const base = ref(30649);
const total = computed(() => base.value * 2);

function incrementar30649() {
  base.value++;
}
</script>
