<template>
  <section class="panel-31385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31385");
const base = ref(31385);
const total = computed(() => base.value * 2);

function incrementar31385() {
  base.value++;
}
</script>
