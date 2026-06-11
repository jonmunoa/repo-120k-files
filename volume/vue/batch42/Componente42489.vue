<template>
  <section class="panel-42489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42489");
const base = ref(42489);
const total = computed(() => base.value * 2);

function incrementar42489() {
  base.value++;
}
</script>
