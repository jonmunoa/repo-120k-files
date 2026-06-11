<template>
  <section class="panel-51269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51269");
const base = ref(51269);
const total = computed(() => base.value * 2);

function incrementar51269() {
  base.value++;
}
</script>
