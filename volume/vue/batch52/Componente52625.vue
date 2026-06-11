<template>
  <section class="panel-52625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52625");
const base = ref(52625);
const total = computed(() => base.value * 2);

function incrementar52625() {
  base.value++;
}
</script>
