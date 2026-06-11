<template>
  <section class="panel-7625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7625");
const base = ref(7625);
const total = computed(() => base.value * 2);

function incrementar7625() {
  base.value++;
}
</script>
