<template>
  <section class="panel-32625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32625");
const base = ref(32625);
const total = computed(() => base.value * 2);

function incrementar32625() {
  base.value++;
}
</script>
