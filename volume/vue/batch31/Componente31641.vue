<template>
  <section class="panel-31641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31641");
const base = ref(31641);
const total = computed(() => base.value * 2);

function incrementar31641() {
  base.value++;
}
</script>
