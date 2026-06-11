<template>
  <section class="panel-34341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34341");
const base = ref(34341);
const total = computed(() => base.value * 2);

function incrementar34341() {
  base.value++;
}
</script>
