<template>
  <section class="panel-19625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19625");
const base = ref(19625);
const total = computed(() => base.value * 2);

function incrementar19625() {
  base.value++;
}
</script>
