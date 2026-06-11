<template>
  <section class="panel-49453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49453");
const base = ref(49453);
const total = computed(() => base.value * 2);

function incrementar49453() {
  base.value++;
}
</script>
