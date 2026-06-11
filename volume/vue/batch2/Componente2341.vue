<template>
  <section class="panel-2341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2341");
const base = ref(2341);
const total = computed(() => base.value * 2);

function incrementar2341() {
  base.value++;
}
</script>
