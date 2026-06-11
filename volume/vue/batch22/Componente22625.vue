<template>
  <section class="panel-22625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22625");
const base = ref(22625);
const total = computed(() => base.value * 2);

function incrementar22625() {
  base.value++;
}
</script>
