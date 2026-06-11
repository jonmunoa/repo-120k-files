<template>
  <section class="panel-51681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51681");
const base = ref(51681);
const total = computed(() => base.value * 2);

function incrementar51681() {
  base.value++;
}
</script>
