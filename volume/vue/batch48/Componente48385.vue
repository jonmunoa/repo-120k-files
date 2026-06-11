<template>
  <section class="panel-48385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48385");
const base = ref(48385);
const total = computed(() => base.value * 2);

function incrementar48385() {
  base.value++;
}
</script>
