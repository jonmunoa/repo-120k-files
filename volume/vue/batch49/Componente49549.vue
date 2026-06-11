<template>
  <section class="panel-49549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49549");
const base = ref(49549);
const total = computed(() => base.value * 2);

function incrementar49549() {
  base.value++;
}
</script>
