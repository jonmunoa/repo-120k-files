<template>
  <section class="panel-14605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14605");
const base = ref(14605);
const total = computed(() => base.value * 2);

function incrementar14605() {
  base.value++;
}
</script>
