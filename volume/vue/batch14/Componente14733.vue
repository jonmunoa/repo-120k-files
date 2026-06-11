<template>
  <section class="panel-14733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14733");
const base = ref(14733);
const total = computed(() => base.value * 2);

function incrementar14733() {
  base.value++;
}
</script>
