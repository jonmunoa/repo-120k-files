<template>
  <section class="panel-24313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24313");
const base = ref(24313);
const total = computed(() => base.value * 2);

function incrementar24313() {
  base.value++;
}
</script>
