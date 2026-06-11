<template>
  <section class="panel-1449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1449");
const base = ref(1449);
const total = computed(() => base.value * 2);

function incrementar1449() {
  base.value++;
}
</script>
