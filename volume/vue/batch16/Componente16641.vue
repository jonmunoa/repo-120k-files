<template>
  <section class="panel-16641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16641");
const base = ref(16641);
const total = computed(() => base.value * 2);

function incrementar16641() {
  base.value++;
}
</script>
