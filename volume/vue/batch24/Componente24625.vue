<template>
  <section class="panel-24625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24625");
const base = ref(24625);
const total = computed(() => base.value * 2);

function incrementar24625() {
  base.value++;
}
</script>
