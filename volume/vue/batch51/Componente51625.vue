<template>
  <section class="panel-51625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51625");
const base = ref(51625);
const total = computed(() => base.value * 2);

function incrementar51625() {
  base.value++;
}
</script>
