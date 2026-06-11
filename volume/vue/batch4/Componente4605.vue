<template>
  <section class="panel-4605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4605");
const base = ref(4605);
const total = computed(() => base.value * 2);

function incrementar4605() {
  base.value++;
}
</script>
