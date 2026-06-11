<template>
  <section class="panel-17341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17341");
const base = ref(17341);
const total = computed(() => base.value * 2);

function incrementar17341() {
  base.value++;
}
</script>
