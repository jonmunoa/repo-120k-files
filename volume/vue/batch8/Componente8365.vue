<template>
  <section class="panel-8365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8365");
const base = ref(8365);
const total = computed(() => base.value * 2);

function incrementar8365() {
  base.value++;
}
</script>
