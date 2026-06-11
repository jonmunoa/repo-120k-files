<template>
  <section class="panel-31337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31337");
const base = ref(31337);
const total = computed(() => base.value * 2);

function incrementar31337() {
  base.value++;
}
</script>
