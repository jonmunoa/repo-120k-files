<template>
  <section class="panel-44813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44813");
const base = ref(44813);
const total = computed(() => base.value * 2);

function incrementar44813() {
  base.value++;
}
</script>
