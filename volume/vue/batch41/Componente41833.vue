<template>
  <section class="panel-41833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41833");
const base = ref(41833);
const total = computed(() => base.value * 2);

function incrementar41833() {
  base.value++;
}
</script>
