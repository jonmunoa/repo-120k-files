<template>
  <section class="panel-53641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53641");
const base = ref(53641);
const total = computed(() => base.value * 2);

function incrementar53641() {
  base.value++;
}
</script>
