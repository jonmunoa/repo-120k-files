<template>
  <section class="panel-33341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33341");
const base = ref(33341);
const total = computed(() => base.value * 2);

function incrementar33341() {
  base.value++;
}
</script>
