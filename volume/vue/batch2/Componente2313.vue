<template>
  <section class="panel-2313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2313");
const base = ref(2313);
const total = computed(() => base.value * 2);

function incrementar2313() {
  base.value++;
}
</script>
