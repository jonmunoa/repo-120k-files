<template>
  <section class="panel-43349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43349");
const base = ref(43349);
const total = computed(() => base.value * 2);

function incrementar43349() {
  base.value++;
}
</script>
