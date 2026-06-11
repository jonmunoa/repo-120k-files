<template>
  <section class="panel-56029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56029");
const base = ref(56029);
const total = computed(() => base.value * 2);

function incrementar56029() {
  base.value++;
}
</script>
