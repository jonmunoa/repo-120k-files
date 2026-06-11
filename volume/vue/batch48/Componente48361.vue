<template>
  <section class="panel-48361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48361");
const base = ref(48361);
const total = computed(() => base.value * 2);

function incrementar48361() {
  base.value++;
}
</script>
