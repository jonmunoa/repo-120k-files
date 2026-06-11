<template>
  <section class="panel-51761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51761");
const base = ref(51761);
const total = computed(() => base.value * 2);

function incrementar51761() {
  base.value++;
}
</script>
