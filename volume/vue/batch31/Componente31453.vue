<template>
  <section class="panel-31453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31453");
const base = ref(31453);
const total = computed(() => base.value * 2);

function incrementar31453() {
  base.value++;
}
</script>
