<template>
  <section class="panel-48657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48657");
const base = ref(48657);
const total = computed(() => base.value * 2);

function incrementar48657() {
  base.value++;
}
</script>
