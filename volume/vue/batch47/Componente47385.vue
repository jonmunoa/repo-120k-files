<template>
  <section class="panel-47385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47385");
const base = ref(47385);
const total = computed(() => base.value * 2);

function incrementar47385() {
  base.value++;
}
</script>
