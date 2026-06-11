<template>
  <section class="panel-41033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41033");
const base = ref(41033);
const total = computed(() => base.value * 2);

function incrementar41033() {
  base.value++;
}
</script>
