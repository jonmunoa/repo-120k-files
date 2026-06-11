<template>
  <section class="panel-54625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54625");
const base = ref(54625);
const total = computed(() => base.value * 2);

function incrementar54625() {
  base.value++;
}
</script>
