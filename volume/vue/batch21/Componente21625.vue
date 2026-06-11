<template>
  <section class="panel-21625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21625");
const base = ref(21625);
const total = computed(() => base.value * 2);

function incrementar21625() {
  base.value++;
}
</script>
