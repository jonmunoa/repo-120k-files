<template>
  <section class="panel-49625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49625");
const base = ref(49625);
const total = computed(() => base.value * 2);

function incrementar49625() {
  base.value++;
}
</script>
