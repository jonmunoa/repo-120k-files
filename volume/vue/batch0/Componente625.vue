<template>
  <section class="panel-625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 625");
const base = ref(625);
const total = computed(() => base.value * 2);

function incrementar625() {
  base.value++;
}
</script>
