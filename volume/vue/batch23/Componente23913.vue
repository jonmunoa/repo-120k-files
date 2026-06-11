<template>
  <section class="panel-23913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23913");
const base = ref(23913);
const total = computed(() => base.value * 2);

function incrementar23913() {
  base.value++;
}
</script>
