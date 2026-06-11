<template>
  <section class="panel-48233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48233");
const base = ref(48233);
const total = computed(() => base.value * 2);

function incrementar48233() {
  base.value++;
}
</script>
