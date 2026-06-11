<template>
  <section class="panel-341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 341");
const base = ref(341);
const total = computed(() => base.value * 2);

function incrementar341() {
  base.value++;
}
</script>
