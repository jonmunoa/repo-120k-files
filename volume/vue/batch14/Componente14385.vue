<template>
  <section class="panel-14385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14385");
const base = ref(14385);
const total = computed(() => base.value * 2);

function incrementar14385() {
  base.value++;
}
</script>
