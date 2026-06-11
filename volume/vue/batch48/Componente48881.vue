<template>
  <section class="panel-48881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48881");
const base = ref(48881);
const total = computed(() => base.value * 2);

function incrementar48881() {
  base.value++;
}
</script>
