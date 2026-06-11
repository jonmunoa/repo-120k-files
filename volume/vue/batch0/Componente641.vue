<template>
  <section class="panel-641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 641");
const base = ref(641);
const total = computed(() => base.value * 2);

function incrementar641() {
  base.value++;
}
</script>
