<template>
  <section class="panel-49641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49641");
const base = ref(49641);
const total = computed(() => base.value * 2);

function incrementar49641() {
  base.value++;
}
</script>
